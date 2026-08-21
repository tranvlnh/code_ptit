n = int(input())

arr = [0] * n

def backtrack(i : int):
    if i == (n + 1) // 2:
        print(' '.join(map(str, arr)))
        return
    for j in [0, 1]:
        arr[i] = j
        arr[(n - 1) - i] = j
        backtrack(i + 1)

backtrack(0)
