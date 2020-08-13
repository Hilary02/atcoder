import sys
input = sys.stdin.readline

n, d = [int(w) for w in input().split()]
ans = 0

for i in range(n):
    x, y = [int(w) for w in input().split()]
    if (x**2+y**2)**0.5 <= d:
        ans += 1

print(ans)
