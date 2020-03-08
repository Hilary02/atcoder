
from collections import deque
r, c = [int(w) for w in input().split()]
sy, sx = [int(w) - 1 for w in input().split()]
gy, gx = [int(w) - 1 for w in input().split()]
field = [list(input()) for _ in range(r)]
dist = [[10000] * c for i in range(r)]

# N E S W
dy = [0, 1, 0, -1]
dx = [-1, 0, 1, 0]

q = deque([(sy, sx, 0)])
dist[sy][sx] = 0

while q:
    now_y, now_x, d = q.pop()
    # print(now_x, now_y)
    for i in range(4):
        new_y, new_x = now_y+dy[i], now_x+dx[i]
        if 0 <= new_x < c and 0 <= new_y < r and field[new_y][new_x] == "." and d + 1 < dist[new_y][new_x]:
            q.append((new_y, new_x, d + 1))
            dist[new_y][new_x] = d + 1

print(dist[gy][gx])
