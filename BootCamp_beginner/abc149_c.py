import math


def is_prime(n):
    for i in range(2, int(math.sqrt(n))):
        if n % i == 0:
            return False
    return True


n = int(input())

while True:
    if is_prime(n):
        break
    n += 1

print(n)
