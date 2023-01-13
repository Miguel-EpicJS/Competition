#include <iostream>

using namespace std;

// prime(naive method)
// O(n)

bool isprime(int n)
{
    if (n <= 1)
	return false;
    for (int i = 2; i < n; i++)
	if(n % i == 0)
	    return false;

    return true;
}

// prime(better method)
// O(sqrt(n))

bool isprime(int n)
{
    if (n <= 1)
	return false;
    for (int i = 2; i*i < n; i++)
	if(n % i == 0)
	    return false;

    return true;
}


int main()
{

    cout << isprime(10);

    return 0;
}

