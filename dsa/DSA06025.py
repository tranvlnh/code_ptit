def solve():
    import sys
    input = sys.stdin.readline

    n = int(input())
    a = [int(x) for x in input().split()]

    if n == 0:
        return

    print(f'Buoc 0: {a[0]}')
    for i in range(1, n):
        key = a[i]
        j = i - 1;
        while j >= 0 and a[j] > key:
            a[j + 1] = a[j]
            j -= 1
        a[j + 1] = key
        print(f'Buoc {i}: {' '.join(map(str, a[:i + 1]))}')


if __name__ == "__main__":
    solve()
