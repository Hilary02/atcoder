while True:
    s = input()
    if s == "0 0":
        break
    n, x = [int(w) for w in s.split()]
    ans = 0
    for i in range(1, n+1):
        for j in range(i+1, n+1):
            for k in range(j+1, n+1):
                if i+j+k == x:
                    ans += 1
    print(ans)
