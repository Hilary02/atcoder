import math

a, b = [int(w) for w in input().split()]
print(a*b / math.gcd(a, b))
