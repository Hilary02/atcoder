n, k = [int(w) for w in input().split()]
la = [int(w) for w in input().split()]
la.sort()

poi = 0
nei = n-1
minus = 0

for a in la:
    if a > 0:
        break


ans = 1
for n in range(k - 3):
    if abs(la[poi]) > abs(la[nei]):
        ans *= la[poi]
        ans %= MOD
        poi += 1
    else:
        ans *= la[nei]
        ans %= MOD
        nei += 1
        minus ^= 1


MOD = 10**9 + 7
