#include <bits/stdc++.h>

using namespace std;

int n, s[3];

int dp[5000];

int solve(int left)
{
    if (left < 0) return -100;
    if (left == 0) return 0;

    if (dp[left] != 0) return dp[left];

    return dp[left] = max(solve(left-s[2])+1, max(solve(left-s[1])+1, solve(left-s[0])+1));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n >> s[0] >> s[1] >> s[2];

    memset(dp, 0, sizeof(dp));

    sort(s, s+3);

    cout << solve(n);

    return 0;
}

