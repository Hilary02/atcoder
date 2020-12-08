n = int(input())
ll = [int(w) for w in input().split()]
ll.sort()

ans = 0
if n < 3:
    print(ans)
    exit()
for i in range(n):
    for j in range(i+1, n):
        if ll[i] == ll[j]:
            continue
        for k in range(j+1, n):
            if ll[j] == ll[k]:
                continue
            if ll[i]+ll[j] > ll[k]:
                ans += 1


print(ans)
