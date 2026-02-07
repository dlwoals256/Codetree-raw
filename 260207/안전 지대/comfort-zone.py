import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n, m = map(int, input().split())
grid = [list(map(int, input().split())) for _ in range(n)]

top_height = max(max(grid))
ks = []

visited = [[False for _ in range(m)] for _ in range(n)]

def can_visit(x, y, k):
    return  0 <= x < n and \
            0 <= y < m and \
            not visited[x][y] and \
            grid[x][y] > k

def dfs(x, y, k):
    dxs = [-1, 1, 0, 0]
    dys = [0, 0, -1, 1]

    visited[x][y] = True
    for dx, dy in zip(dxs, dys):
        nx, ny = x + dx, y + dy
        if can_visit(nx, ny, k):
            visited[nx][ny] = True
            dfs(nx, ny, k)

best_k = 1
max_areas = 0
for k in range(1, top_height+1):
    current_areas = 0
    visited = [[False for _ in range(m)] for _ in range(n)]
    for i in range(n):
        for j in range(m):
            if grid[i][j] > k and not visited[i][j]:
                dfs(i, j, k)
                current_areas += 1
    if current_areas > max_areas:
        max_areas = current_areas
        best_k = k

print(best_k, max_areas)