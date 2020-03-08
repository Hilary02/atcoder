import sys
n, h = [int(w) for w in input().split()]

a_li = [0] * n
b_li = [0] * n

for i in range(n):
    a_li[i], b_li[i] = [int(w) for w in input().split()]

max_slash_dmg = max(a_li)
throw_li = [damage for damage in b_li if damage > max_slash_dmg]

throw_li.sort(reverse=True)

counter = 0
for i, dmg in enumerate(throw_li):
    h -= dmg
    if h <= 0:
        print(i + 1)
        sys.exit()

counter = len(throw_li)

counter += (h + max_slash_dmg - 1) // max_slash_dmg

print(counter)
