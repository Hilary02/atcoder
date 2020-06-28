import sys
input = sys.stdin.readline
k, n = [int(w) for w in input().split()]
a_li = [int(w) for w in input().split()]

dist = k - a_li[-1] + a_li[0]

for i in range(1, n):
    dist = max(dist, a_li[i] - a_li[i - 1])

# 小細工したけど大差ない
# for a1, a2 in zip(a_li[:-1], a_li[1:]):
#     dist = max(dist, a2-a1)

print(k - dist)
