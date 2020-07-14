from itertools import permutations

n = int(input())
in_list = [int(w) for w in input().split()]
p_li = tuple(in_list)
q_li = tuple([int(w) for w in input().split()])


permu = permutations(sorted(in_list))

p_in = 0
q_in = 0

for i, p in enumerate(permu):
    if p == p_li:
        p_in = i
    if p == q_li:
        q_in = i

print(abs(p_in-q_in))
