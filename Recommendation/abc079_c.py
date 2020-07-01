s = input()

for i in range(8):
    cal = ""
    for j in range(3):
        cal += s[j]
        if (i >> j) & 1:
            cal += "+"
        else:
            cal += "-"
    cal += s[3]
    if eval(cal) == 7:
        break

print(f"{cal}=7")
