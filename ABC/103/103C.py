def gcd(a, b):
    a,b = min(a,b),max(a,b)
    while b:
	    a, b = b, a % b
    return a

#least multi
def lm(a,b):
    return a*b // gcd(a,b)

N =input()
list = input().split(" ")
int_li = [int(s) for s in list]

m = 1
for i in int_li:

    m = lm(m,i)
m-=1

ans = 0
for i in int_li:
    ans += m%i

print(ans);
