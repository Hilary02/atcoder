import numpy as np

n = int(input())
max_n = int(n ** 0.5)
memo = np.zeros((max_n, max_n, max_n))

ans = [0]*(n+1)

for x in range(1, max_n):
    for y in range(1, max_n):
        for z in range(1, max_n):
            s = x ** 2 + y ** 2 + z ** 2 + x * y + y * z + z * x
            if s < n+1:
                ans[s] += 1


for i in range(1, n+1):
    print(ans[i])
