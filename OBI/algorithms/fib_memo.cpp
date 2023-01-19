#include <iostream>
#include <map>

using namespace std;

// recursive fib with memoization
//

// https://programminggenin.blogspot.com/2013/01/memoization-in-c.html

unsigned fib_mem(unsigned n)
{
    static map<unsigned, unsigned> memo;

    if (n <= 1)
	return n;

    if (memo.count(n) >= 0)
	return memo[n];

    unsigned ret = fib_mem(n-1) + fib_mem(n-2);

    memo[n] = ret;

    return ret;

}

int main()
{

    cout << fib_mem(3);

    return 0;
}

