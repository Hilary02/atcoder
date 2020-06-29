n, m = [int(w) for w in input().split()]

odd = n * (n - 1) // 2
even = m * (m - 1) // 2

print(odd + even)
