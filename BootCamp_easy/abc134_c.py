import sys
input = sys.stdin.readline

n = int(input())

max1 = 0
max2 = 0
maxindex = -1

for i in range(n):
    a = int(input())
    if a >= max1:
        max2 = max1
        max1 = a
        maxindex = i
    elif a >= max2:
        max2 = a

out = [max1] * n
out[maxindex] = max2

for m in out:
    print(m)
