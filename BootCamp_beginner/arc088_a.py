

x, y = [int(w) for w in input().split()]

ans = 0
t = x
while t <= y:
    t *= 2
    ans += 1
print(ans)


"""
    l = math.log2(y/x)
    return (1 + int(l))
だとダメなのか．分からん
x * 2^n = y
2^n = y/x
n = log2(y/x)
"""
