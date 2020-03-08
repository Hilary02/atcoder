a, b = [int(w) for w in input().split()]

ans = 0
if (a - b) % 2 == 1:
    print("IMPOSSIBLE")
else:
    print(abs(a + b) // 2)
