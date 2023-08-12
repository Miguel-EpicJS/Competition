#include <bits/stdc++.h>

using namespace std;

long long ans[500];

long long calc(vector<long long> &arr)
{
    long long ans = 0;
    long long m = 0;
    for (int i = 0; i < arr.size(); i++)
    {
	ans += (i+1) * arr[i];
	m = max(m, (i+1) * arr[i]);
    }

    return ans-m;
}

int dp[505];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    memset(dp, 0, sizeof(dp));

    while(t--)
    {
	int n;

	cin >> n;

	if (dp[n] != 0)
	{
	    cout << dp[n] << "\n";
	    continue;
	}
	vector<long long> arr(n);
	long long ans = 0;

	for (int k = 1; k <= n; k++)
	{
	    arr[k-1]= k;
	}

	for (int i = 0; i < n; i++)
	{
	    for (int k = 1; k <= n; k++)
	    {
		arr[k-1]= k;
	    }
	    reverse(arr.begin() + i, arr.end());

	    ans = max(ans, calc(arr));
	}

	dp[n] = ans;
	cout << ans << "\n";

    }

    return 0;
}

