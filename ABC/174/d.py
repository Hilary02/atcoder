n = int(input())
lc = input()
lc = lc.lstrip("R").rstrip("W")

ans = 0
lin = 0
rin = len(lc)-1
flg = False
while lin < rin:
    while True:
        if lc[lin] == "W":
            break
        lin += 1
    while True:
        if lc[rin] == "R":
            break
        rin -= 1
    if lin > rin:
        break
    lin += 1
    rin -= 1
    ans += 1

print(ans)
