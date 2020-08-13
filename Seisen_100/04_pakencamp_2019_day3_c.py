n, m = [int(w) for w in input().split()]
lla = [[int(w) for w in input().split()] for i in range(n)]
ans = 0
for i in range(m):
    for j in range(i+1, m):
        t = 0
        for k in range(n):
            t += max(lla[k][i], lla[k][j])
        ans = max(ans, t)
print(ans)
