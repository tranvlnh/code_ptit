import sys
input = sys.stdin.readline

def solve():
    t = int(input())
    while t > 0:
        t -= 1
        n, x = input().split()
        a = input().split()
        if x in a:
            print(1)
        else:
            print(-1)
    

if __name__ == '__main__':
    solve()