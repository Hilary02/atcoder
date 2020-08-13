n = int(input())


def solve(n):
    dig = [0] * 11
    pardig = [0] * 11
    dig[1] = 9
    pardig[1] = 1
    for i in range(2, 11):
        dig[i] = 3 ** (i - 1) * 10 - 2
        pardig[i] = 3 ** (i - 1)

    sum_dig = [0] * 11
    for i in range(1, 11):
        sum_dig[i] = dig[i] + dig[i - 1]

    for i, d in enumerate(sum_dig):
        if n <= d:
            ans_digits = [0] * i
            break
    len_ans = len(ans_digits)
    tmp = n - dig[len_ans - 1]

    print(dig)
    print(sum_dig)
    print(pardig)

    if len_ans == 1:
        return n

    # 最上位の位
    ans_digits[0] = tmp // pardig[len_ans] + 1
    tmp -= (tmp // pardig[len_ans]) * pardig[len_ans]

    if tmp == 0:
        return "9" * len_ans

    for i in range(1, len_ans):
        tmp_d = tmp // pardig[len_ans - i]
        print(tmp, pardig[len_ans - i], tmp_d)
        ans_digits[i] = tmp_d
        tmp -= tmp_d * pardig[len_ans - i]

    print(ans_digits)
    for i in range(1, len_ans-1):
        ans_digits[i] = ans_digits[i - 1] + ans_digits[i] - 1

    print(ans_digits)
    return "".join(map(str, ans_digits))


print(solve(n))
