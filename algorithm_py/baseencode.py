x = 5
while x < 36:
    y = int('4', x)
    z = int('34', x)
    w = int('141', x)

    k = int('234', x)

    if y + z + w == k:
        print(x)

    x+=1


