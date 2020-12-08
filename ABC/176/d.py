h, w = [int(w) for w in input().split()]
ch, cw = [int(w)-1 for w in input().split()]
dh, dw = [int(w)-1 for w in input().split()]

field = [list(input()) for _ in range(h)]
warp = [[1, 1, 1, 1, 1], [1, 1, 0, 1, 1], [
    1, 0, 0, 0, 1], [1, 1, 0, 1, 1], [1, 1, 1, 1, 1]]

cost = [[1e10]*w for _ in range(h)]

# N E S W
direction = [[-1, 0], [0, 1], [1, 0], [0, -1]]


def step(_h, _w, _c):
    if _c >= cost[_h][_w]:
        return
    cost[_h][_w] = _c

    # 4
    for d in direction:
        if _h+d[0] < 0 or _h+d[0] >= h or _w+d[1] < 0 or _w+d[1] >= w:
            continue
        if field[_h+d[0]][_w+d[1]] == ".":
            step(_h+d[0], _w+d[1], _c)

    # syuui
    for i in range(-2, 3):
        if _h+i < 0 or _h+i >= h:
            continue
        for j in range(-2, 3):
            if _w+j < 0 or _w+j >= w:
                continue
            if warp[i+2][j+2] == 0:
                continue
            if field[_h+i][_w+j] == ".":
                step(_h+i, _w+j, _c+1)


step(dh, dw, 0)

if cost[ch][cw] == 1e10:
    print(-1)
else:
    print(cost[ch][cw])
