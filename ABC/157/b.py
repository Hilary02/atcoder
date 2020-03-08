sheet = [list(map(int, input().split())) for _ in range(3)]
n = int(input())

li = [[False] * 3 for i in range(3)]

for i in range(n):
    m = int(input())
    for j in range(3):
        for k in range(3):
            if sheet[j][k] == m:
                li[j][k] = True


# check
ans = False
for i in range(3):
    tmp = li[0][i] & li[1][i] & li[2][i]
    if tmp:
        ans = True
        break
for i in range(3):
    tmp = li[i][0] & li[i][1] & li[i][2]
    if tmp:
        ans = True
        break

tmp = li[0][0] & li[1][1] & li[2][2]
if tmp:
    ans = True
tmp = li[0][2] & li[1][1] & li[2][0]
if tmp:
    ans = True

if ans:
    print("Yes")
else:
    print("No")
