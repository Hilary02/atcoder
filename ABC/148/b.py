n = int(input())
s, t = input().split()

ans = ""
for w1,w2 in zip (s,t):
    ans += w1 + w2
print(ans)