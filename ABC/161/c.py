n, k = [int(w) for w in input().split()]

t = n // k

print(min([n, abs(n - k * t), abs(n - k * (t + 1))]))
