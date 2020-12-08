n = input()

n_sum = 0
for c in n:
    n_sum += int(c)


cond = n_sum % 9 == 0
print("Yes" if cond else "No")
