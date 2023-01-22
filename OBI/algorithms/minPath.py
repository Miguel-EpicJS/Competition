# https://en.wikipedia.org/wiki/Dynamic_programming | checkboard

c = [
    [100, 100, 100, 100, 100, 100],
    [100, 6, 7, 4, 7, 8],
    [100, 7, 6, 1, 1, 4],
    [100, 3, 5, 7, 8, 2],
    [100, 100, 6, 7, 0, 100],
    [100, 100 , 100, 5, 100, 100],
]

# 100 = infinity :)

def minCost(i, j):
    if j < 1 or j > 5:
        return 100
    elif i == 1:
        return c[i][j]
    else:
        return min( minCost(i - 1, j - 1), minCost(i - 1, j), minCost(i - 1, j + 1) )  + c[i][j]


print(minCost(1, 1))

