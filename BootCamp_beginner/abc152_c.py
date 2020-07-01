n = int(input())
p_li = [int(w) for w in input().split()]

ans = 0
used_min = 2000000

for p in p_li:
    if p <= used_min:
        ans += 1
        used_min = p

print(ans)
