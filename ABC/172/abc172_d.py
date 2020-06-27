def divisors(n):
    nums = 0
    for i in range(1, int(n**0.5)+1):
        if n % i == 0:
            nums += 1
            if i != n // i:
                nums += 1
    return nums


n = int(input())

ans = 0
for i in range(1, n + 1):
    ans += i * divisors(i)
print(ans)
