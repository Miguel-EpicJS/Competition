import math

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    tot = 0
    for i in range(1, n):
        if a[i] < a[i - 1]:
            d = math.ceil(math.log2(a[i - 1] / a[i]))
            tot += d
            a[i] <<= d

    print(tot)

