import sys

n, m = [int(w) for w in input().split()]

m //= 1000
for i in range(n+1):
    for j in range(n+1 - i):
        k = n - i - j
        if m == i + 5 * j + 10 * k:
            print(k, j, i)
            sys.exit()

print("-1 -1 -1")
