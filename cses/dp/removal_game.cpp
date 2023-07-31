#include <bits/stdc++.h>

using namespace std;

long long dp[5001][5001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<long long> arr(n);
    long long s = 0;
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
	s+=arr[i];
	dp[i][i] = arr[i];
    }

    for (int i = n-1; i >= 0; i--)
    {
	for (int j = i + 1; j < n; j++)
	{
	    long long f = arr[i] - dp[i+1][j];
	    long long l = arr[j] - dp[i][j-1];

	    dp[i][j] = max(f, l);
	}
    }

    cout << (s + dp[0][n-1]) / 2 << "\n";

    return 0;
}

