import numpy as np
h, w, k = [int(w) for w in input().split()]
lc = [[1 if w == "#" else 0 for w in list(input())] for _ in range(h)]

lc = np.array(lc)

ans = 0
for i in range(2 ** h):
    # を採用したとき
    cntb = np.zeros(w)
    for j in range(h):  # このループが一番のポイント
        if ((i >> j) & 1):  # 順に右にシフトさせ最下位bitのチェックを行う
            cntb += lc[j]

    for ii in range(2 ** w):
        t = 0
        for jj in range(w):
            if ((ii >> jj) & 1):
                t += cntb[jj]
        if t == k:
            ans += 1

print(ans)
