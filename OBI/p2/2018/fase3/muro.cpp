#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    long long dp[10001];

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 5;
    dp[3] = 11;

    for (int i = 4; i <= n; i++)
    {
	dp[i] = (dp[i-1] + 4*dp[i-2] + 2 * dp[i-3]) % (long long)(1e9+7);
    }

    cout << dp[n] << "\n";

    return 0;
}

