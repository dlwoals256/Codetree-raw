n, m = map(int, input().split())
grid = [list(map(int, input().split())) for _ in range(n)]

def is_happy(sequence):
    if n < m: return False
    
    cnt = 1
    for i in range(1, n):
        if sequence[i] == sequence[i-1]:
            cnt += 1
        else:
            cnt = 1
        
        if cnt >= m:
            return True
            
    return cnt >= m

if m == 1:
    print(n * 2)
else:
    happy_cnt = 0
    for i in range(n):
        if is_happy(grid[i]):
            happy_cnt += 1

    for j in range(n):
        col_seq = [grid[i][j] for i in range(n)]
        if is_happy(col_seq):
            happy_cnt += 1
    
    print(happy_cnt)