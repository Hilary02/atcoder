s = input()
t = input()

ans  ="No"
#素直に
for i in range(len(s)):
    tmp = s[-1] + s[0:-1]
    #print(tmp)
    if tmp == t :
        ans ="Yes"
        break
    s = tmp

print(ans)
