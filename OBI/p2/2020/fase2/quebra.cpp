#include <bits/stdc++.h>

const int INF = 0x3f3f3f3f;

using namespace std;

int n, x, y;

int l1[501], l2[501];

int dp[501][501][501];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    cin >> x;

    for (int i = 1; i <= x; i++)
    {
	cin >> l1[i];
    }
    cin >> y;
    for (int i = 1; i <= y; i++)
    {
	cin >> l2[i];
    }   


    for (int i = n; i >= 1; i--)
    {
	for (int j = x+1; j >= 1; j--)
	{
	    for (int k = y+1; k >= 1; k--)
	    {
		int xi = n-i+1;
		int xj = x-j+1;
		int xk = y-k+1;
		if (xj > xi || xk > xi)
		{
		    dp[i][j][k] = -INF;
		    continue;
		}
		else if (i == n) {dp[i][j][k] = l1[j] * l2[k]; continue;}
		dp[i][j][k] = max({l1[j]*l2[k] + dp[i+1][j+1][k+1], dp[i+1][j+1][k], dp[i+1][j][k+1]});
	    }
	}
    }

    cout << dp[1][1][1] << "\n";

    return 0;
}
// based on NOIC
