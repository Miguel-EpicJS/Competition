#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;

    cin >> n;

    long long x = 0;
    long long y = 14;
    long long z = 6;

    for (int i = 1; i <= n; i++)
    {
	if (i == 1) cout << "0\n";
	else if (i == 2) cout << "6\n";
	else if (i == 3) cout << "28\n";
	else if (i == 4) cout << "96\n";
	else
	{
	    x = i*i;
	    x = x*(x-1)/2;
	    cout << x - (y * (i-2)) - z << "\n";
	    y += 4;
	    z += 2;
	}
    }

    return 0;
}

