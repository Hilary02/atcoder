import time

t1 = time.time()

ans = 0
for i in range(2000 * 20000):
    if i % 15 == 0:
        print(i)

t2 = time.time()
print(t2-t1)
