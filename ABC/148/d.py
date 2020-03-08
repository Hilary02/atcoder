n = int(input())
# pnt = list(map(int, input().split()))

ans = 0
counter = 1

print(pnt)
for m in pnt:
    if m != counter:
        ans += 1
    else:
        counter += 1

if counter == 1:
    print(-1)
else:
    print(ans)
