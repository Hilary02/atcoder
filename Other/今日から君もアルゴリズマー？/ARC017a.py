import math


def check_prime(n: int):
    for i in range(2, int(math.sqrt(n)) + !):
        if n % i == 0:
            return True
    return False


n = int(input())
if check_prime(n):
    print("NO")
else:
    print("YES")
