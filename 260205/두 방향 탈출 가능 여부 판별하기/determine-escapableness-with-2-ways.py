# DFS on grid

n, m = map(int, input().split())
grid = [list(map(int, input().split())) for _ in range(n)]

visited = [[False for _ in range(m)] for _ in range(n)]

visited[0][0] = True

def is_grid(x, y):
    return 0 <= x < n and 0 <= y < m

def can_go(x, y):
    return  is_grid(x, y) and \
            not visited[x][y] and \
            grid[x][y] != 0

def dfs(x, y):
    dxs, dys = [1, 0], [0, 1]

    for dx, dy in zip(dxs, dys):
        new_x, new_y = x + dx, y + dy
        if can_go(new_x, new_y):
            visited[new_x][new_y] = True
            dfs(new_x, new_y)

dfs(0, 0)

if visited[n-1][m-1]:
    print(1)
else:
    print(0)