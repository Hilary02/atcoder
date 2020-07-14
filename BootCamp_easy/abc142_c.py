import sys
input = sys.stdin.readline
n = int(input())
a_li = [int(w) for w in input().split()]
student = list(range(0, n))
student.sort(key=lambda x: a_li[x])
for n in student:
    print(n + 1, end=" ")
