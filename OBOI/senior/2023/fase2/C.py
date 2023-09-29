
n = int(input())

arr = []

for i in range(n):
    a,b = input().split()
    a = int(a)
    b = int(b)
    while a != 1 and b != 1:
        a /= 2
        b /= 2


    arr.append((a, b))

ansN = 1
ansD = 1
ansM = 0

maxN = 0
maxD = 0
maxM = 0

for i in arr:
    ansN *= i[0]
    ansD *= i[1]

    while ansN != 1 and ansD != 1:
        ansN /= 2
        ansD /= 2

    ansM += ansN // 1000000007
    if ansD > ansN:
        ansN = 1
        ansD = 1
    else:
        if ansN > maxN or ansD > maxD:
            maxN = ansN 
            maxD = ansD 
            maxM = ansM

    if ansN > 10**50:
        ansD = ansN // 1000000007
        maxD = maxN // 1000000007
        ansN = ansN % 1000000007
        maxN = maxN % 1000000007


print(int(maxN % 1000000007))

