import sys
input = sys.stdin.readline
n = int(input())
a_li = [int(w) for w in input().split()]
a_li.sort(reverse=True)

alice = sum(a_li[::2])
bob = sum(a_li[1::2])
print(alice-bob)
