#include <bits/stdc++.h>

using namespace std;
long long dp[1000001];

const int MOD = (int)1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    vector<int> coins;

    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	coins.push_back(x);
    }

    sort(coins.begin(), coins.end());

    dp[0] = 1;
    

    for (int i = 1; i <= n; i++) {
	for (int weight = 0; weight <= m; weight++) {
            if (weight - coins[i - 1] >= 0) {
                dp[weight] += dp[weight - coins[i - 1]];
                dp[weight] %= MOD;
            }
        }
    }

    cout << dp[m] << "\n";
    return 0;
}

