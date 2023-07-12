#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;
    
    int a[1000005], b[1000005], dp[1000005];

    while (t--)
    {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
	    cin >> a[i];
	    b[i-1] = dp[i-1] = -1000015;
	}

	dp[0] = 0;
	b[n] = dp[n] = -1000015;

	for (int i = 1, prv = 0; i <= n; i++)
	{
	    dp[i] = prv;
	    dp[i] = max(dp[i], i+b[a[i]]);
	    b[a[i]] = max (b[a[i]], dp[i-1]-(i-1));
	    prv = max (prv, dp[i]);
	}
	cout << dp[n] << "\n";
    }

    return 0;
}

