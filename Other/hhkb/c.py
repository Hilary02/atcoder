n = int(input())
lp = [int(w) for w in input().split()]

ans = ""

used = set()
n_min = 0

for i in lp:
    used.add(i)

    while n_min in used:
        n_min += 1
    ans += str(n_min)+"\n"

print(ans)
