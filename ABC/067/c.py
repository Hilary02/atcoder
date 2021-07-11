n, x = [int(w) for w in input().split()]
pnt = []
for i in range(n):
    pnt.append(int(input()))

x_bin = str(bin(x))

for i in range(n):
    pos = -pnt[i]
    print(x_bin[pos])
