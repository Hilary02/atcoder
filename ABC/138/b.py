n = int(input())
a_list = list(map(int, input().split()))

sum = 0
for a in a_list:
    sum += 1 / a

print(1/sum)
