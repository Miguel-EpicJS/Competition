# fib with DP(Dynamic Programming)

m = {0: 0, 1: 1}

def fib(n):
    if n not in m:
        m[n] = fib(n-1) + fib(n-2)
    return m[n]

print(fib(10))
