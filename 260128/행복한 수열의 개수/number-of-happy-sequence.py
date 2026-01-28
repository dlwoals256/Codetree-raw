n, m = map(int, input().split())
grid = [list(map(int, input().split())) for _ in range(n)]

def is_happy_sequence(seq):
    cnt = 1
    max_cnt = 1
    for i in range(1, n):
        if seq[i] == seq[i-1]:
            cnt += 1
        else:
            cnt = 1
        max_cnt = max(max_cnt, cnt)

    return max_cnt >= m

if m == 1:
    print(n * 2)
else:
    happy_cnt = 0
    for i in range(n):
        if is_happy_sequence(grid[i]):
            happy_cnt += 1

    for j in range(n):
        col_seq = [grid[i][j] for i in range(n)]
        if is_happy_sequence(col_seq):
            happy_cnt += 1
    
    print(happy_cnt)