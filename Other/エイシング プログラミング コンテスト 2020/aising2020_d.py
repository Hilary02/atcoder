n = int(input())
x = input()

memo = dict()


def f(n, c1, cnt):
    cnt += 1
    if n in memo:
        return memo[n]
    m = n % c1
    if m == 0:
        return cnt
    else:
        cnt = f(m, bin(m).count("1"), cnt)
        memo[n] = cnt
        return cnt


cnt1_n = x.count("1")
for i in range(n):
    ch_bi = x[:i] + str(int(x[i]) ^ 1) + x[i + 1:]
    ch_cnt = cnt1_n + (-1 if int(x[i]) else 1)

    num = int(ch_bi, 2)

    print(f(num, ch_cnt, 0))
