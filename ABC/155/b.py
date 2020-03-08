import sys
n = int(input())
a_li = [int(w) for w in input().split()]

for a in a_li:
    if a % 2 == 0:
        if a % 3 == 0 or a % 5 == 0:
            continue
        else:
            print("DENIED")
            sys.exit()

print("APPROVED")
