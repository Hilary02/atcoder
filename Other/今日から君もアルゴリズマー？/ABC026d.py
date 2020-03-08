import math

a, b, c = [int(w) for w in input().split()]
low = 0
high = 500


def f(t): return a * t + b * math.sin(c * t * math.pi)


for i in range(100):
    mid = (low + high) / 2
    if f(mid) < 100:
        low = mid
    else:
        high = mid
print(low)
