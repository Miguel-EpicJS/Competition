#include <bits/stdc++.h>

using namespace std;

int dp[100001][101];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n, m;

    cin >> n >> m;

    vector<int> x;

    int mod = 1e9+7;

    for (int i = 0; i < n; i++)
    {
	int y;
	cin >> y;
	x.push_back(y);
    }

    if (x[0] == 0)
    {
	fill(dp[0], dp[0] + 101, 1);
    }
    else
    {
	dp[0][x[0]] = 1;
    }

    for (int i = 1; i < n; i++)
    {
	int y = x[i];
	if (y == 0)
	{
	    for (int j = 1; j <=m; j++)
	    {
		for (int k : {j-1, j, j+1})
		{
		    if (k >= 1 && k <= m)
		    {
			dp[i][j] = (dp[i][j] + dp[i-1][k]) % mod;
		    }
		}
	    }
	}
	else
	{
	    for (int k : {y-1, y, y+1})
	    {
		if (k >= 1 && k <= m)
		{
		    dp[i][y] = (dp[i][y] + dp[i-1][k]) % mod;
		}
	    }
	}
    }

    int ans = 0;

    for (int j = 1; j <= m; j++)
    {
	ans = (ans + dp[n-1][j]) % mod;
    }

    cout << ans << "\n";

    return 0;
}

