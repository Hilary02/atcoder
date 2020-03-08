n = int(input())
pnt = list(map(int, input().split()))

pnt.sort()
val = (pnt[0]+pnt[1])/2
for i in range(2, n):
    val = (val + pnt[2]) / 2

print(val)
