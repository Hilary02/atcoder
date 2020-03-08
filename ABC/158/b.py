import math
import sys

n, a, b = [int(w) for w in input().split()]

if a == 0:
    print(0)
    sys.exit()

if a + b >= n:
    print(min(a, n))
    sys.exit()

ans = 0
rep = n // (a + b)

ans += a * rep
n -= (a + b) * rep

ans += (min(a, n))

print(ans)
