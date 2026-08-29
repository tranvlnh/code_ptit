import sys
input = sys.stdin.readline

def solve():
    t = int(input())
    while t > 0:
        t -= 1
        n = int(input())

        a = list(map(int, input().split()))
        d = {}
        for x in a:
            if x not in d: d[x] = 0
            d[x] += 1
        r = dict(sorted(d.items(), key=lambda it: (-it[1], it[0])))
        for (k, v) in r.items():
            for _ in range(v):
                print(k, end=' ')
        print()
    

if __name__ == '__main__':
    solve()