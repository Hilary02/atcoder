n = int(input())

robots = [None]*n
for i in range(n):
    robots[i] = [int(w) for w in input().split()]

robots.sort(key=lambda r: r[0])


cluster = [1]
for i, robot in enumerate(robots):
    if i + 1 == n:
        break
    print(robot)
    if robot[0] + robot[1] > robots[i + 1][0]:
        # ぶつかる
        cluster[-1] += 1
    else:
        cluster.append(1)
print(robots)
print(cluster)
ans = 1
for c in cluster:
    ans *= (c + 1)
print(ans)
