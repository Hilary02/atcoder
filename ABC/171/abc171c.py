def int2chr(n: int):
    if n == 0:
        return 'z'
    else:
        return chr(n + 96)


n = int(input())

name = ""
pow_index = 1
while True:
    m = n % 26
    name = int2chr(m) + name
    n -= m
    n //= 26
    if m == 0:
        n -= 1
    if n == 0:
        break
print(name)
