h, w = map(int, input().split())
f = [list(input()) for _ in range(h)]

ans = 0

for i in range(h-1):
    for j in range(w-1):
        if f[i][j] == ".":
            if f[i+1][j] == ".":
                ans += 1
            if f[i][j+1] == ".":
                ans += 1

for i in range(h-1):
    if f[i][w-1] == "." and f[i+1][w-1] == ".":
        ans += 1

for j in range(w-1):
    if f[h-1][j] == "." and f[h-1][j+1] == ".":
        ans += 1

print(ans)
