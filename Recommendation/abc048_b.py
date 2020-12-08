import math


a, b, z = [int(w) for w in input().split()]

l = (a-1)//z
l = max(l, 0)
r = b//z

print(r-l)
