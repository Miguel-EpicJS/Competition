#include <bits/stdc++.h>

using namespace std;

int n, s1, s2;

vector<int> l1, l2;

int dp[501][501][501];

int solve(int p, int i, int j)
{

    if (dp[p][i][j] != 0) return dp[p][i][j];
    
    if ( !(s1 - i+1) || !(s2 - j+1) ) return 0;
    if ( (s1 - i+1) > (n - p+1) || (s2 - j+1) > (n - p+1) ) return dp[p][i][j] = -100000000;
    if (p == n) return dp[p][i][j] = l1[i-1] * l2[j-1];

    int t1 = l1[i-1] * l2[j-1] + solve(p+1, i+1, j+1);
    int t2 = solve(p+1, i+1, j);
    int t3 = solve(p+1, i, j+1);

    return dp[p][i][j] = max({t1, t2, t3});

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    cin >> s1;
    for (int i = 0; i < s1; i++)
    {
	int x;
	cin >> x;
	l1.push_back(x);
    }
    cin >> s2;
    for (int i = 0; i < s2; i++)
    {
	int x;
	cin >> x;
	l2.push_back(x);
    }

    cout << solve(1, 1, 1) << "\n";

    return 0;
}

