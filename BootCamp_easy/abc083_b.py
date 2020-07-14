n, a, b = [int(w) for w in input().split()]


def sum_digit(n):
    t = 0
    while n > 0:
        t += n % 10
        n //= 10
    return t


ans = 0
for i in range(1, n + 1):
    if a <= sum_digit(i) <= b:
        ans += i
print(ans)
