n = int(input())

pos = [[int(w) for w in input().split()] for _ in range(n)]

dist = [[0] * n for i in range(n)]

for i in range(n):
    for j in range(i+1, n):
        d = ((pos[i][0]-pos[j][0])**2 + (pos[i][1]-pos[j][1])**2)**0.5
        dist[i][j] = d

ave = sum(map(sum, dist))/((n**2-n)//2)

print(ave*(n-1))


"""
permutationで全部列挙しても間に合う．700msくらい
distはそもそも町を保存しておく必要はなかった
"""
