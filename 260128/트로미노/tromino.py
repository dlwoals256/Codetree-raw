n, m = map(int, input().split())
grid = [list(map(int, input().split())) for _ in range(n)]

def block1(arr):
    rotation1 = arr[0][0] + arr[1][0] + arr[1][1]
    rotation2 = arr[0][0] + arr[0][1] + arr[1][0]
    rotation3 = arr[0][1] + arr[1][0] + arr[1][1]

    return max(rotation1, rotation2, rotation3)

def transpose(arr):
    res = []
    for i in range(len(arr)):
        col = []
        for j in range(len(arr)):
            col.append(arr[j][i])
        res.append(col)
    return res

def block2(arr):
    pos1 = sum(arr[0][:])
    pos2 = sum(arr[1][:])
    pos3 = sum(arr[2][:])
    arrT = transpose(arr)
    pos4 = sum(arrT[0][:])
    pos5 = sum(arrT[1][:])
    pos6 = sum(arrT[2][:])

    return max(pos1, pos2, pos3, pos4, pos5, pos6)

res = []

for i in range(n):
    if i >= n-1:
        break
    for j in range(m):
        if j >= m-1:
            break
        res.append(block1([row[j:j+2] for row in grid[i:i+2]]))

for i in range(n):
    if i >= n-2:
        break
    for j in range(m):
        if j >= m-2:
            break
        res.append(block2([row[j:j+3] for row in grid[i:i+3]]))

print(max(res))