#include <bits/stdc++.h>

using namespace std;

int n, s1, s2;

int l1[502], l2[502];

int dp[501][501][501];

int solve(int p, int i, int j)
{

    if (dp[p][i][j]) return dp[p][i][j];
   
    int leftp = n-p+1;
    int left0 = s1-i+1;
    int left1 = s2-j+1;

    if ( left0 > leftp || left1 > leftp ) return dp[p][i][j] = -0x3f3f3f3f;
    if ( !(left0) || !(left1) ) return 0;
    if (p == n) return dp[p][i][j] = l1[i] * l2[j];

    int t1 = l1[i] * l2[j] + solve(p+1, i+1, j+1);
    int t2 = solve(p+1, i+1, j);
    int t3 = solve(p+1, i, j+1);

    dp[p][i][j] = max({t1, t2, t3});

    return dp[p][i][j];
}

int main()
{
    cin >> n;
    cin >> s1;
    for (int i = 1; i <= s1; i++)
    {
	cin >> l1[i];
    }
    cin >> s2;
    for (int i = 1; i <= s2; i++)
    {
	cin >> l2[i];
    }

    

    cout << solve(1, 1, 1) << "\n";

    return 0;
}

