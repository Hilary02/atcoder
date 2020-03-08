n = [0]+list(map(int, list(input())))

ans = 0
carryup = False
for i in n[::-1]:
    if carryup:
        i += 1
        if i == 0:
            carryup = True
            continue
    if i >= 5:
        # おつりとして
        ans += 10 - i
        carryup = True
    else:
        ans += i
        carryup = False
print(ans)
