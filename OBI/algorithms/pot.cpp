#include <iostream>

using namespace std;

// fast exponention
// b^n in O(log n)

int sq(int x) { return x*x };

int pot(int b, int n)
{
    if (n == 0)
	return 1;
    if (n % 2 == 1)
	return b * pot(b, n-1);
    else
	return sq(pot(b, n/2));
}

int main()
{
    cout << pot(3, 17);

    return 0;
}
