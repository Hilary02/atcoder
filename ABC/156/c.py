n = int(input())

x_li = [int(w) for w in input().split()]

x_ave = sum(x_li) / len(x_li)
ave_pos = int(x_ave+0.5)

ans = 0
for x in x_li:
    ans += (x - ave_pos) ** 2

print(ans)
