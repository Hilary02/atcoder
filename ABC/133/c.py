import sys
l, r = [int(w) for w in input().split()]


if r-l >= 2019:
    print(0)
    sys.exit()

ans = 1.0e100
for i in range(l, r+1):
    for j in range(i + 1, r+1):
        ans = min(ans, i * j % 2019)
print(int(ans))
