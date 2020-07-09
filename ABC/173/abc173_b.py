n = int(input())
ls = [input() for _ in range(n)]

nac = 0
nwa = 0
ntle = 0
nre = 0

for s in ls:
    if s == "AC":
        nac += 1
    elif s == "WA":
        nwa += 1
    elif s == "TLE":
        ntle += 1
    else:
        nre += 1

print(f"AC x {nac}\n\
WA x {nwa}\n\
TLE x {ntle}\n\
RE x {nre}")
