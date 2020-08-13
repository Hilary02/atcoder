def printYN(c): print("Yes") if c else print("No")


n, m = [int(w) for w in input().split()]
a = [int(w) for w in input().split()]
total = sum(a)

choice = [t for t in a if t >= total / (4 * m)]
# print([t for t in a if t >= total / (4 * m)])

printYN(len(choice) >= m)
