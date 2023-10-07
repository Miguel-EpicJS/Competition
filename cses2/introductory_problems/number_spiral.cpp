#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;

    cin >> t;
    while(t--)
    {
	long long x, y;

	cin >> x >> y;

	if (x % 2 == 1 && y < x)
	{
	    cout << (x*x)+1-y << "\n";
	}
	else if((x % 2 == 0) && (y-1 <= x))
	{
	    cout << (x-1)*(x-1)+y << "\n";
	}
	else if (y % 2 == 1 && x < y)
	{
	    cout << (y*y)+1-x << "\n";
	}
	else if ((y % 2 == 0) && (x-1 <= y))
	{
	    cout << (y-1)*(y-1)+x << "\n";
	}
    }

    return 0;
}

