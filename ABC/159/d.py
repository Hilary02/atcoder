from collections import Counter

n = int(input())
k_list = [int(w) for w in input().split()]
c = Counter(k_list)


max_pat = 0
for n in c.values():
    max_pat += (n * (n - 1)) // 2

for i in k_list:
    cnt = c[i]
    tmp = max_pat

    if cnt >= 2:
        tmp -= (cnt * (cnt - 1)) // 2
        tmp += ((cnt - 1) * (cnt - 2)) // 2

    print(tmp)
