#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    int dp[1000001];

    dp[0] = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
	int temp = i;
	int minSteps = 1e6+2;
	while(temp != 0)
	{
	    int di = temp % 10;
	    temp /= 10;
	    if (di == 0) continue;
	    minSteps = min(minSteps, 1 + dp[i-di]);
	}
	dp[i] = minSteps;
    }

    cout << dp[n] << "\n";

    return 0;
}

