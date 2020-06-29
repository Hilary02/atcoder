k, n = [int(w) for w in input().split()]
a = [int(w) for w in input().split()]

max_dist = a[-1] - a[0]
for i in range(n-1):
    max_dist = max(max_dist, a[i + 1] - a[i])

print(k - max_dist)
