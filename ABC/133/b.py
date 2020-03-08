import math

n, m = [int(w) for w in input().split()]
points = []


for i in range(n):
    points.append([int(w) for w in input().split()])

count = 0

for i in range(n):
    for j in range(i + 1, n):
        dist = sum([(x1 - y1) ** 2 for x1, y1 in zip(points[i], points[j])])
        dist = math.sqrt(dist)
        # print(dist)
        if dist.is_integer():
            count += 1


print(count)
