import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

n = int(input())
grid = [list(map(int, input().split())) for _ in range(n)]

visited = [[False for _ in range(n)] for _ in range(n)]
town = []

def can_visit(x, y):
    return  0 <= x < n and \
            0 <= y < n and \
            not visited[x][y] and \
            grid[x][y]

def dfs(x, y):
    dxs = [-1, 1, 0, 0]
    dys = [0, 0, -1, 1]
    people = 1

    visited[x][y] = True
    for dx, dy in zip(dxs, dys):
        nx, ny = x + dx, y + dy
        if can_visit(nx, ny):
            visited[nx][ny] = True
            people += dfs(nx, ny)
    
    return people

for i in range(n):
    for j in range(n):
        if grid[i][j] and not visited[i][j]:
            result = dfs(i, j)
            town.append(result)

print(len(town))
town.sort()

for p in town:
    print(p)