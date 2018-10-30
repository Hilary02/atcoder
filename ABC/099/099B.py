inp = input()
a,b = inp.split(" ")
a = int(a)
b = int(b)
diff = b-a

oria = 0
for i in range(diff):
    oria +=i

print(oria -a)