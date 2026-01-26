n = int(input())
grid = [list(map(int, input().split())) for _ in range(n)]

# Please write your code here.

coins = []
delta = [
    (-1, -1), (0, -1), (1, -1),
    (-1, 0), (0, 0), (1, 0),
    (-1, 1), (0, 1), (1, 1)
]
coin = 0

for i in range(1, n-1):
    for j in range(1, n-1):
        for x, y in delta:
            coin += grid[i+x][j+y]
        coins.append(coin)
        coin = 0

print(max(coins))