#include <bits/stdc++.h>

using namespace std;

int dp[1000001];

int solve(vector<int> &coins, int money)
{
    if (money < 0) return 100000000;
    if (money == 0) return 0;
    if (dp[money] != 0) return dp[money];

    int ans = 100000000;

    for (auto i : coins)
    {
	ans = min(ans, solve(coins, money-i)+1);
    }

    return dp[money] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;
    vector<int> coins(n);

    for (int i = 0; i < n; i++)
    {
	cin >> coins[i];
    }
    dp[0] = 0;    
    for (int i = 1; i <= n; i++)
    {
	dp[i] = 100000000;
	for (auto c : coins)
	{
	    if (i-c >= 0)
	    {
		dp[i] = min(dp[i], dp[i-c]+1);
	    }
	}
    }

    int a = dp[m];
    if (a == 100000000) cout << "-1\n";
    else cout << a << "\n";

    return 0;
}

