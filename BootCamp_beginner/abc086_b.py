import sys
import math
input = sys.stdin.readline

a, b = input().split()
n = int(a + b)

cond = math.sqrt(n).is_integer()
print("Yes" if cond else "No")
