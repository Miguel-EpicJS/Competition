#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    if (a > b) swap(a, b);

    if (a == b)
    {
	cout << "0\n";
	return 0;
    }

    int dp[501][501];

    memset(dp, 0, sizeof(dp));
    
    for (int i = 0; i <= a; i++)
    {
	for (int j = 0; j <= b; j++)
	{
	    if (i == j) continue;
	    dp[i][j] = 1e9;
	    for (int k = 1; k < i; k++)
	    {
		dp[i][j] = min(dp[i][j], dp[k][j] + dp[i-k][j]+1);
	    }
	    for (int k = 1; k < j; k++)
	    {
		dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j-k] + 1);
	    }
	}
    }

    cout << dp[a][b] << "\n";

    return 0;
}

