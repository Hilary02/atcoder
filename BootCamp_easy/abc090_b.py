a, b = [int(w) for w in input().split()]

ans = 0
for i in range(a, b + 1):
    if str(i) == str(i)[::-1]:
        ans += 1
print(ans)

"""
コード長的にはこのやり方
str(i)を一度変数に入れるだけで今回の場合20ms程高速になる
速度的には回文数字を生成したうえでabの範囲内かを判定する方法
"""
