from collections import defaultdict
n, p = [int(w) for w in input().split()]


# 自力で解いたやつ /ansしたら通らないのは謎
"""
if n == 1:
    ans = p
else:
    ans = 1
    i = 2
    while i <= int(p ** (1 / n)):
        while (p / ans ** n) % i ** n == 0 and (p / ans ** n) > 0:
            ans *= i
        i += 1
print(ans)
"""


def prime_factorization(n):
    dd = defaultdict(int)
    while n % 2 == 0:
        dd[2] += 1
        n //= 2
    f = 3
    while f ** 2 <= n:
        if n % f == 0:
            dd[f] += 1
            n //= f
        else:
            f += 2
    if n != 1:
        dd[n] += 1
    return dd


pd = prime_factorization(n)
ans = 1
for k, v in pd.items():
    ans *= k ** (v // n)
print(ans)
