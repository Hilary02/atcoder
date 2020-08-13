n, k = [int(w) for w in input().split()]
h = [int(w) for w in input().split()]

dp = [float("inf")] * n
dp[0] = 0

for i in range(1, n):
    for j in range(1, min(k, i) + 1):
        t = dp[i - j] + abs(h[i - j] - h[i])
        if dp[i] > t:
            dp[i] = t


print(dp[-1])
