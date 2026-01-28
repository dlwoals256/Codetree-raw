n, m = map(int, input().split())
edges = [tuple(map(int, input().split())) for _ in range(m)]

if m == 0:
    print(0)
else:
    graph = [[] for _ in range(n+1)]
    for u, v in edges:
        graph[u].append(v)
        graph[v].append(u)

    visited = [False for _ in range(n+1)]
    cnt = 0

    def dfs(node):
        global cnt
        visited[node] = True
        for next_node in graph[node]:
            if not visited[next_node]:
                cnt += 1
                dfs(next_node)

    dfs(1)

    print(cnt)