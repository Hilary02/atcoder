import collections

n = int(input())
a = [int(w) for w in input().split()]
q = int(input())

a_counter = collections.Counter(a)
now_sum = sum(a)
for i in range(q):
    b, c = [int(w) for w in input().split()]

    num = a_counter[b]
    a_counter[b] = 0
    a_counter[c] += num
    # print(a_counter)

    now_sum += (c - b) * num
    print(now_sum)
