n = map(int,input().split())
mon = list(map(int, input().split()))
hero = list(map(int, input().split()))

ans = 0

for i in range(n):
    if mon[i] >= hero[i]:
        ans += hero[i]
        mon[i] -= hero[i]
        hero[i]
    else:
