#include <iostream>
#include <vector>

using namespace std;

// Recursive
int fib(int n)
{
    if (n <= 1)
	return n;
    return fib(n-1) + fib(n-2);
}

// DP

int fibDP(int n)
{
    int f[n+1];
    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i <= n; i++)
	f[i] = f[i-1] + f[i-2];
    return f[n];
}



int main()
{

    cout << fib(40) << "\n";

    // ./a.out  0.97s user 0.00s system 96% cpu 1.010 total

    cout << fibDP(40) << "\n";
    // ./a.out  0.00s user 0.01s system 58% cpu 0.012 total

    return 0;
}
