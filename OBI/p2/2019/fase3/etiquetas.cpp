#include <bits/stdc++.h>

using namespace std;

int dp[10001][10001], arr[10001];

int n, c, k;
const int inf = 1e8+10;

int solve(int i, int j)
{
    if (i <= 0 && j == k) return 0;
    if (i <= 0 && j != k) return inf;

    if (dp[i][j] != 4*inf) return dp[i][j];

    int tot = solve(i-1, j);

    if (j < k && i >= c) tot = min(tot, solve(i-c, j+1)+arr[i] - arr[max(i-c, 0)]);

    return dp[i][j] = tot;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n >> c >> k;

    arr[0] = 0;

    for (int i = 1; i <= n; i++)
    {
	cin >> arr[i];
	arr[i]+=arr[i-1];

	for(int j=0; j<=k; j++){
            dp[i][j] = 4*inf;
        }
    }


    cout << arr[n] - solve(n, 0) << "\n";


    return 0;
}

