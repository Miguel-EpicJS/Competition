#include <bits/stdc++.h>

using namespace std;

string s1, s2;
int dp[5001][5001];
int solve(int i, int j)
{
    if (i == 0) return j;
    if (j == 0) return i;
    if (dp[i][j] != 0) return dp[i][j];

    if (s1[i-1] == s2[j-1]) return solve(i-1, j-1);

    return dp[i][j] = 1 + min({solve(i-1, j-1), solve(i-1, j), solve(i, j-1)});
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> s1 >> s2;

    cout << solve(s1.size(), s2.size());

    return 0;
}

