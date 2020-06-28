n = int(input())
a_li = [int(w) for w in input().split()]

S = a_li[0]
for a in a_li[1:]:
    S ^= a

for a in a_li:
    print(a ^ S, end=" ")
