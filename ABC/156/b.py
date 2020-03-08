n, k = [int(w) for w in input().split()]

d = 0
while n != 0:
    n //= k
    d += 1

print(d)
