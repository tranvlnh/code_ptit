import sys
from itertools import combinations

def solve():
    input = sys.stdin.readline
    line = input().split()
    if not line:
        return
    n, k = map(int, line)

    limit = 100000
    is_prime = [True] * (limit + 1)
    is_prime[0] = is_prime[1] = False
    for i in range(2, int(limit**0.5) + 1):
        if is_prime[i]:
            for j in range(i * i, limit + 1, i):
                is_prime[j] = False

    order = 0
    for comb in combinations(range(1, n + 1), k):
        order += 1
        if is_prime[order]:
            print(f"{order}: " + " ".join(map(str, comb)))

if __name__ == "__main__":
    solve()