import sys
input = sys.stdin.readline

n, m = [int(w) for w in input().split()]

m_l = 0
m_r = n
for i in range(m):
    l, r = [int(w) for w in input().split()]
    m_l = max(m_l, l)
    m_r = min(m_r, r)
print(max(m_r - m_l + 1, 0))

