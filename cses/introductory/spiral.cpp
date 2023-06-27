#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
	long long x, y;

	cin >> x >> y;

	long long ans = 0;
	if (x % 2 == 0)
	{
	    if (y <= x)
	    {
		ans = x*x - (y-1);
	    }
	    else if (y % 2 == 1)
	    {
		ans = y*y - (x-1);
	    }
	    else
	    {
		ans = (y-1)*(y-1)+x;
	    }
	}
	else 
	{
	    if (y <= x)
	    {

		ans = (x-1)*(x-1)+y;
	    }
	    else if (y % 2 == 1)
	    {
		ans = y*y - (x-1);
	    }
	    else
	    {
		ans = (y-1)*(y-1)+x;
	    }

	}
	cout << ans << "\n";	
    }

    return 0;
}

