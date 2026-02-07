import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n, m = map(int, input().split())
grid = [list(map(int, input().split())) for _ in range(n)]

top_height = max(max(grid))
ks = []
areas = [[i, 0] for i in range(top_height)]

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

for k in range(1, top_height):
    visited = [[False for _ in range(m)] for _ in range(n)]
    for i in range(n):
        for j in range(m):
            if grid[i][j] > k and not visited[i][j]:
                dfs(i, j, k)
                areas[k][1] += 1

areas.sort(key=lambda x: x[1])
print(areas[-1][0], areas[-1][1])