import sys


def solve():
    input = sys.stdin.readline
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    arr.sort()
    result : list[list[int]] = []
    subset : list[int] = []

    def back_track(idx : int, curr_sum: int):
        if curr_sum > k:
            return
        if idx >= n:
            if curr_sum == k:
                result.append(subset.copy())
            return
        back_track(idx + 1, curr_sum)
        subset.append(arr[idx])
        back_track(idx + 1, curr_sum + arr[idx])
        _ = subset.pop()
    back_track(0, 0)

    for r in result:
        print(' '.join(map(str, r)))
    print(len(result))


if __name__ == '__main__':
    solve()
