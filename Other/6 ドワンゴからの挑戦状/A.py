n = int(input())
sl = [" " for i in range(n)]
tl = [0 for i in range(n)]

for i in range(n):
    st, tt = input().split()
    sl[i] = st
    tl[i] = int(tt)

X = input()


index = sl.index(X)
ans = 0
for i in range(index + 1, n):
    ans += tl[i]

print(ans)
