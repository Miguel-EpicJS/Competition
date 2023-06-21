#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;

    cin >> t;

    while (t--)
    {
	unsigned long long n, k, g, tot = 0;

	cin >> n >> k >> g;
	tot = k * g;
	if (g <= 2)
	{
	    cout << "0\n";
	    continue;
	}
	if (n >= tot)
	{
	    cout << tot << "\n";
	    continue;
	}
	

	unsigned long long x = (n-1) * (g/2 -1);
	unsigned long long y = (n) * (g/2 -1);
	if (g % 2 == 1) x = (n-1) * (g/2);
	if (g % 2 == 1) y = (n-1) * (g/2);
	if (x >= tot || y >= tot)
	{
	    cout << tot << "\n";
	    continue;
	}
	
	unsigned long long r = (tot - x) % g;

	

	if (r >= g/2.0) x -= (g - r);
	else x += r;

	cout << x <<"\n";
    }
    return 0;
}

