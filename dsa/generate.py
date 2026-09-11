from itertools import combinations
import sys

def solve():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    t = int(input_data[0])
    idx = 1
    out = []
    
    for _ in range(t):
        n = int(input_data[idx])
        k = int(input_data[idx + 1])
        idx += 2
        
        elements = [str(i) for i in range(1, n + 1)]
        res = (''.join(c) for c in combinations(elements, k))
        out.append(' '.join(res))
        
    sys.stdout.write('\n'.join(out) + '\n')

if __name__ == "__main__":
    solve()