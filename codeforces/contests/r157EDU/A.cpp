#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while(t--)
    {

	long long a, b, c, x, y, z, n, m, k;

	cin >> x >> y >> z;
    
	if (abs(x-y) <= z) cout << max(x, y) << "\n";
	else if (y <= x)
	{
	    cout << x << "\n";
	}
	else
	{
	    x+=z;
	    cout << y + (y-x) << "\n";
	}
	

    }

    return 0;
}

