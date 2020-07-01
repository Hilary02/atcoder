import math
n = int(input())
a_li = [int(w) for w in input().split()]

ans = 10**9
for a in a_li:
    # t = 0
    # while a % 2 == 0:
    #     a //= 2
    #     t += 1

    t = math.log2(a & -a)
    ans = min(ans, t)

print(int(ans))
