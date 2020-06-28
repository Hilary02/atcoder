n = int(input())

for i in range(10):
    if 2 ** i > n:
        ans = 2 ** (i - 1)
        break

print(ans)
