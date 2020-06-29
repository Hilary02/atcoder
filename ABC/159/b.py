s = input()

ans = True
n = len(s)
if s != s[::-1]:
    ans = False

front = s[0:(n-1)//2]
if front != front[::-1]:
    ans = False


back = s[(n+3)//2-1:n+1]
if back != back[::-1]:
    ans = False

# print(s, front, back)

if ans:
    print("Yes")
else:
    print("No")
