MOD = 10**9 + 7
def count_configurations(n, k, moves):
    rook_positions = set()
    for r, c in moves:
        rook_positions.add((r, c))
        rook_positions.add((c, r))
    empty_cells=n**2-len(rook_positions)
    return pow(2,empty_cells, MOD)
t=int(input().strip())
for _ in range(t):
    n,k=map(int, input().split())
    moves=[tuple(map(int,input().split())) for _ in range(k)]
    print(count_configurations(n,k,moves))