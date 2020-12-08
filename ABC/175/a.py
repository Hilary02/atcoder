s = input()

ans = 0
t = 0
for c in s:
    if c == "R":
        t += 1
    else:
        ans = max(ans, t)
        t = 0
ans = max(ans, t)


print(ans)
