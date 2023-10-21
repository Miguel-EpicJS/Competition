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
	long long n, k, x;
	cin >> n >> k >> x;

	long long a = (k*(k+1))/2;
	long long b = ((n*(n+1))/2) - ((n-k)*(n-k+1)/2);

	if (x < a || x > b)
	{
	    cout << "NO\n";
	}
	else
	{
	    cout << "YES\n";
	}

    }

    return 0;
}

