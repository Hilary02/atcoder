n = int(input()) % 10
ans = ""
if n == 3:
    ans = "bon"
elif n in (2, 4, 5, 7, 9):
    ans = "hon"
else:
    ans = "pon"

print(ans)
