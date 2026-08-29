import sys
input = sys.stdin.readline

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    step= 1
    for i in range(n-1):
        f = False
        for j in range(n - 1 - i):
            if a[j] > a[j+1]:
                a[j], a[j+1] = a[j+1], a[j]
                f = True
        if not f: return
        
        print(f"Buoc {step}: {' '.join(map(str, a))}")
        step += 1

if __name__ == '__main__':
    solve()