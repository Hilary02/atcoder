x, k, d = [int(w) for w in input().split()]
x = abs(x)

t = x//d

ans = 0
if k <= t:
    ans = x-k*d
else:
    ans = x-d*t
    k -= t
    if k % 2 == 1:
        ans -= d

print(abs(ans))
