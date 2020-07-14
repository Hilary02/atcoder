n = int(input())

lucas = [0] * (n + 1)
lucas[0] = 2
lucas[1] = 1


for i in range(2, n + 1):
    lucas[i] = lucas[i - 2] + lucas[i - 1]

print(lucas[n])

"""
変数2つで良かった
"""
