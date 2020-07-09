import math
a, b, x = [int(w) for w in input().split()]

lo = 0
hi = 10**9+1


def calc_price(n):
    return a*n + b*len(str(n))


while lo+1 < hi:
    mid = (lo + hi) // 2
    if calc_price(mid) > x:
        hi = mid
    else:
        lo = mid
print(lo)


# 桁数ごとに判定もできるのではないかと思ったがしくった
"""
ans = 0
for di in range(1, 9):
    maxbuy = (x - di * b) // a
    if 10 ** (di-1) <= maxbuy:
        maxbuy = min(maxbuy, 10 ** di - 1)
        ans = max(ans, maxbuy)

if a * 10 ** 9 + b * 9 <= x:
    ans = 10**9

print(ans)
"""
