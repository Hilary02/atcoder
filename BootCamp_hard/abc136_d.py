s = input()




# TLEする
"""
state = [1] * len(s)
prev_state = [0] * len(s)

turn = 0

while True:
    # print(state)
    turn += 1
    next_state = [0]*len(s)
    for i, c in enumerate(s):
        if state[i] == 0:
            continue
        if c == "R":
            next_state[i + 1] += state[i]
        else:
            next_state[i - 1] += state[i]

    if state == next_state:
        break
    elif prev_state == next_state:
        if turn % 2 == 0:
            state = prev_state
        else:
            pass
        break
    else:
        prev_state = state
        state = next_state

print(" ".join([str(w) for w in state]))
"""