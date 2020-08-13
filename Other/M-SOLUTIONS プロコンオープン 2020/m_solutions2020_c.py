n, k = [int(w) for w in input().split()]
la = [int(w) for w in input().split()]

for i in range(k, n):
    cond = la[i] > la[i-k]
    print("Yes" if cond else "No")
