import sys

a, b = [int(w) for w in input().split()]

max_n = (b + 1) * 10

for i in range(max_n):
    if a == int(i * 0.08) and b == int(i * 0.1):
        print(i)
        sys.exit()

print(-1)
