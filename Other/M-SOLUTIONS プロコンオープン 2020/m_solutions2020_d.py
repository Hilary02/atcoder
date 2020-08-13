n = int(input())
la = [10000]+[int(w) for w in input().split()]+[-1]

money = 1000

cheap = la[1]
for i in range(2, len(la)):
    if la[i] >= la[i-1]:
        cheap = min(cheap, la[i-1])
        continue
    if la[i-1] >= la[i-2]:
        kabu = money//cheap
        money += kabu*(la[i-1] - cheap)
        cheap = la[i]
    cheap = min(cheap, la[i])
print(money)
