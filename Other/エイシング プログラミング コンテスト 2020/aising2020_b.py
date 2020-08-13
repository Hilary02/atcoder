n = int(input())
la = [int(w) for w in input().split()]

ans = 0

for i, a in enumerate(la):
    if i % 2 == 0 and a % 2 == 1:
        ans += 1
print(ans)
