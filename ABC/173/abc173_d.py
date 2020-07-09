n = int(input())
la = [int(w) for w in input().split()]
la.sort(reverse=True)

ans = la[0]
cnt = n - 2
for a in la[1:]:
    if cnt >= 2:
        cnt -= 2
        ans += a * 2
    elif cnt == 1:
        cnt -= 1
        ans += a
    else:
        break
print(ans)
