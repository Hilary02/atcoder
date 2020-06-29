def printYN(c): print("Yes") if c else print("No")


s = input()

flag = s[2] == s[3] and s[4] == s[5]
printYN(flag)
