import bisect

n = int(input())
ll = [int(w) for w in input().split()]
ll.sort()

ans = 0
for i in range(n):
    for j in range(i + 1, n):
        ans += bisect.bisect_left(ll, ll[i] + ll[j]) - (j + 1)

print(ans)

"""
3重ループはアルゴリズム的には会っていたがTLE
2重ループにしてかつ2分探査で効率化を測ってようやく900ms．
C++だと3重ループの力技でも1500ms以内
"""
