#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    int a = 1, b = 0;

    while (n > 0)
    {
	for (int i = 2; i <= n; i+= 2)
	{
	    cout << a * i + b << " ";
	}
	if (n & 1)
	{
	    cout << a + b << " ";
	    b += a;
	}
	else
	{
	    b -= a;
	}
	a <<= 1;
	n >>= 1;

    }
	
    return 0;
}

