class Data:
    '''
    An array[i][j] means weight from node i to node j.
    '''
    INF = float('inf')

    non_weighted = [
        [0, 0, 0, 0, 1, 0],
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 1, 0],
        [0, 0, 1, 0, 0, 1],
        [0, 0, 0, 0, 0, 0],
        [0, 0, 0, 1, 0, 0],
    ]

    non_weighted_dfs_bfs = [
        [0, 0, 1, 0, 1],
        [1, 0, 0, 1, 0],
        [1, 0, 0, 0, 0],
        [0, 1, 0, 0, 1],
        [0, 0, 0, 1, 0],
    ]

    # Dijkstra, Floyd-Warshall example
    weighted_1 = [
        [0, INF, 6, 3, INF],
        [3, 0, INF, INF, INF],
        [INF, INF, 0, 1, INF],
        [INF, 1, 2, 0, INF],
        [INF, 4, INF, 2, 0],
    ]

    # Dijkstra example
    weighted_2 = [
        [0, 2, 5, 1, INF, INF],
        [2, 0, 3, 2, INF, INF],
        [5, 3, 0, 3, 1, 5],
        [1, 2, 3, 0, 1, INF],
        [INF, INF, 1, 1, 0, 2],
        [INF, INF, 5, INF, 2, 0],
    ]
