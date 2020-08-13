import math


n, k = [int(w) for w in input().split()]
la = [int(w) for w in input().split()]
la = sorted(la, reverse=True)


lo = 0
hi = 10**9+1
m = la[0]
la.pop(0)


def check(_k):
    if _k > k:
        return False, -1
    t = m/_k
    less = k-_k
    sum_cut = 0
    for a in la:
        if sum_cut > less:
            return False, -1
        if a <= t:
            break
        cut = math.ceil(a/t)
        sum_cut += cut

    if sum_cut <= less:
        return True, t
    else:
        return False, -1


while lo+1 < hi:
    mid = (lo + hi) // 2
    cond = check(mid)
    print(cond)
    if cond[0]:
        lo = mid
        ans = cond[1]
    else:
        hi = mid
    print(mid)
print(lo, ans)
