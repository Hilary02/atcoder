import sys

n, m = [int(w) for w in input().split()]

digit = [""] * n
check = True
for i in range(m):
    s, c = input().split()
    s = int(s) - 1
    if digit[s] == "" or digit[s] == c:
        digit[s] = c
    else:
        check = False
        print(-1)
        sys.exit()


if n == 1:
    if digit[0] == "":
        print(0)
    else:
        print(digit[0])
else:
    ans = ""

    if digit[0] == "0":
        print(-1)
        sys.exit()
    elif digit[0] == "":
        ans += "1"
    else:
        ans += digit[0]

    for d in digit[1:]:
        if d == "":
            ans += "0"
        else:
            ans += d
    print(ans)
