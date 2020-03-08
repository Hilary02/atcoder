def gcd(n, m):
    if m > n:
        n, m = m, n
    while m > 0:
        n, m = m, n % m
    return n


def lcm(n, m):
    if n == 0 or m == 0:
        return 0
    return n * m // gcd(n, m)


n = int(input())
t_li = [int(input()) for _ in range(n)]

ans = t_li[0]

for t in t_li[1:]:
    ans = lcm(ans, t)
print(ans)
