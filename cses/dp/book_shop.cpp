#include <bits/stdc++.h>

using namespace std;

int price[1001], pages[1001];
int dp[1001][100001];
int n, k;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n >> k;



    for (int i = 0; i < n; i++)
	cin >> price[i];
    for (int i = 0; i < n; i++)
	cin >> pages[i];

    for (int i = 1; i <= n; i++)
    {
	int cprice = price[i-1];
	int cpages = pages[i-1];

	for (int j = 1; j <= k; j++)
	{
	    dp[i][j] = dp[i-1][j];
	    if (cprice <= j)
	    {
		dp[i][j] = max(dp[i][j], dp[i-1][j-cprice] + cpages);
	    }
	}

    }

    cout << dp[n][k] << "\n";

    return 0;
}

