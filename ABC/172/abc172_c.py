n, m, k = [int(w) for w in input().split()]
a_li = [int(w) for w in input().split()]
b_li = [int(w) for w in input().split()]

ans = n + m
time = sum(a_li) + sum(b_li)
a_index = n - 1
b_index = m - 1
while time > k:
    ans -= 1
    print(a_index, b_index)
    if a_index < 0:
        time -= b_li[b_index]
        b_index -= 1
        continue
    elif b_index < 0:
        time -= a_li[a_index]
        a_index -= 1
        continue

    if a_li[a_index] > b_li[b_index]:
        time -= a_li[a_index]
        a_index -= 1
    else:
        time -= b_li[b_index]
        b_index -= 1
print(ans)
