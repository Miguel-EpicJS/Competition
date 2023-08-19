#include <bits/stdc++.h>

using namespace std;

int arr[1001];

int8_t dp[1000][100000];

int8_t solve(int n, int amount, int i)
{
    if (dp[i][amount] > 0) return dp[i][amount];
    if (amount == 0) return 2;
    if (amount < 0) return 1;
    if (i == n) return 1;
    
    return dp[i][amount] = max(solve(n, amount-arr[i], i+1), solve(n, amount, i+1));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, vals;

    cin >> n >> vals;

    for (int i = 0; i < vals; i++)
    {
	cin >> arr[i];
    }


    if (solve(vals, n, 0)) cout << "S\n";
    else cout << "N\n";

    return 0;
}

