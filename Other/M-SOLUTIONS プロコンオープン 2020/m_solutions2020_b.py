import math


a, b, c = [int(w) for w in input().split()]
k = int(input())
t = 0
while not b > a:
    b *= 2
    t += 1
while not c > b:
    c *= 2
    t += 1
cond = t <= k
print("Yes" if cond else "No")
