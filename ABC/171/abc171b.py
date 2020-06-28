n, k = [int(w) for w in input().split()]
p_li = [int(w) for w in input().split()]

p_li.sort()
print(sum(p_li[:k]))
