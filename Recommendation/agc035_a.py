import collections
n = int(input())
la = [int(w) for w in input().split()]

# x = la[0]

# for a in la[1:]:
#     x ^= a

# cond = x == 0
# print("Yes" if cond else "No")
"""
これは嘘回答 1 1 1 1とかでダメ
"""


cnt = collections.Counter(la)
cond = True
if len(cnt.keys()) >= 4:
    cond = False


for c in cnt:
    cnt[c]


print("Yes" if cond else "No")
