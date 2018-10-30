a,b,c = input().split(" ")
list = []
list.append(int(a))
list.append(int(b))
list.append(int(c))

list.sort()

ans = 0
ans += list[1] -list[0]
ans += list[2] -list[1]


print(ans)