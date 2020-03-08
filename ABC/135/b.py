n = map(int, input().split())
pnt = list(map(int, input().split()))

s_pnt = sorted(pnt)

cnt = 0
for p, s in zip(pnt, s_pnt):
    if p != s:
        cnt += 1


if cnt <= 2:
    print("YES")
else:
    print("NO")
