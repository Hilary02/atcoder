import sys

n = int(input())
s_di = dict()

for i in range(n):
    t = input()
    if t not in s_di:
        s_di[t] = 1
    else:
        s_di[t] += 1

s_di = sorted(tuple(s_di.items()))
s_di = sorted(s_di, key=lambda s: s[1])
# print(s_di)

n_max = s_di[-1][1]

for s in s_di:
    if s[1] == n_max:
        print(s[0])
