n = int(input())
ans = 5000

t = []
for i in range(n):
    t.append(int(input()))

for i in range(2 ** n):
    a = 0
    b = 0
    for j in range(n):
        if (i >> j) & 1 == 1:
            a += t[j]
        else:
            b += t[j]

    ans = min(ans, max(a, b))
print(ans)
