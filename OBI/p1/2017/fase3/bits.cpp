#include <bits/stdc++.h>

using namespace std;

int dp[1010][1010];
int mod = 1e9+7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;

    cin >> n >> k;

    memset(dp, 0, sizeof(dp));

    dp[0][0] = 1;

    for (int i = 0; i < n; i++)
    {
	for (int j = 0; j < k; j++)
	{
	    dp[i+1][0] = (dp[i+1][0] + dp[i][j]) % mod; 
	    dp[0][j] = 0;
	    dp[i+1][j+1] = ( dp[i+1][j+1] + dp[i][j]) % mod;
	    dp[0][j] = 0;
	}
    }

    int ans = 0;

    for (int i = 0; i <= k; i++)
    {
	ans = (dp[n][i] + ans) % mod;
    }

    cout << ans << "\n";

    return 0;
}

