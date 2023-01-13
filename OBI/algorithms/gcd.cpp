#include <iostream>

using namespace std;

// gcd Euclides
// O(log n)

int gcd(int a, int b)
{
    if(b == 0)
	return a;
    return gcd(b, a % b);
}

