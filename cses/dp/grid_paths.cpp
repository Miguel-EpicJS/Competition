#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    int dp[1001][1001];
    char m[1001][1001];

    cin >> n;

    for (int i = 1; i <= n; i++)
	for (int j = 1; j <= n; j++)
	    cin >> m[i][j];

    memset(dp, 0, sizeof(dp));

    dp[0][1] = 1;

    for (int i = 1; i <= n; i++)
    {
	for (int j = 1; j <= n; j++)
	{
	    if (m[i][j] == '*') continue;
	    dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % (1000000007);
	}
    }

    cout << dp[n][n] << "\n";

    return 0;
}

