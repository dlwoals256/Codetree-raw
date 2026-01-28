n, m = map(int, input().split())
edges = [tuple(map(int, input().split())) for _ in range(m)]

graph = [[0 for _ in range(n)] for _ in range(n)]

for x, y in edges:
    graph[x-1][y-1] = 1
    graph[y-1][x-1] = 1

visited = [False for _ in range(n)]
cnt = 0
def dfs(node):
    global cnt
    for curr_node in range(n):
        if graph[node][curr_node] and not visited[curr_node]:
            cnt += 1
            visited[curr_node] = True
            dfs(curr_node)

dfs(1)

print(cnt-1)