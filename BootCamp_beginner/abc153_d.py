import sys
h = int(input())

if h == 1:
    print(1)
    sys.exit()
ans = 1
while h > 0:
    ans *= 2
    h //= 2

print(ans-1)
