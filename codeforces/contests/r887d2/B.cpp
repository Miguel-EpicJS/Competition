#include <bits/stdc++.h>


using namespace std;

void multiply(int F[2][2], int M[2][2])
{
	int x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
	int y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
	int z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
	int w = F[1][0] * M[0][1] + F[1][1] * M[1][1];

	F[0][0] = x;
	F[0][1] = y;
	F[1][0] = z;
	F[1][1] = w;
}


void power(int F[2][2], int n, int a, int b)
{
	if (n == 0 || n == 1)
		return;
	int M[2][2] = { { 1, 1 }, { 1, 0 } };

	power(F, n / 2, a, b);
	multiply(F, M);

	if (n % 2 != 0)
		multiply(F, M);
}
int fib(int n, int a, int b)
{
	int F[2][2] = { { a+b, b }, { b, a } };
	if (n == 0)
		return 0;
	power(F, n - 1, a, b);

	return F[0][0];
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while(t--)
    {
	int x, y;
    
	cin >> x >> y;
	y--;	
	int tot = 0, k = 0;

	for (int a = 0; a < x; a++)
	{
	    for (int b = a+1; b <= x; b ++)
	    {
		k = fib(y, a, b);
		if (k == x)tot++;
	    }
	}

	
	cout << tot << "\n";

    }

    return 0;
}

