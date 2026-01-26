data = {
    1: 1,
    2: 2,
    3: 3,
    4: 4,
    5: 5,
    6: 6,
    7: 7,
    8: 8,
}

def find(data: dict, x):
    if data[x] == x:
        return x
    root = find(data, data[x])
    data[x] = root
    return root


def union(data: dict, x, y):
    x = find(data, x)
    y = find(data, y)
    data[x] = y


union(data, 1, 3)
union(data, 5, 6)
union(data, 1, 5)

print(find(data, 5))
union(data, 4, 1)
print(find(data, 4))

print(data)

print(find(data, 1))