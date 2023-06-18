#include <bits/stdc++.h>

using namespace std;

int dp[31][200001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;

    cin >> n >> q;


    for (int i = 1; i <= n; i++)
    {
	int x;
	cin >> x;

	dp[0][i] = x;
    }

    for (int i = 1; i <= 30; i++)
    {
	for (int j = 1; j <= n; j++)
	{
	    dp[i][j] = dp[i-1][dp[i-1][j]];
	}
    }
    for (int i = 0; i < q; i++)
    {
	int x, k;

	cin >> x >> k;
	
	int v = 0;
	vector<int> pos;
	
	for (int j = 30; j >= 0; j--)
	{
	    v = (1<< j);
	    if (v <= k)
	    {
		pos.push_back(j);
		k-= v;
	    }
	}
	
	int f = x;

	for(auto j : pos)
	{
	    f = dp[j][f];
	}
	cout << f << "\n";
    }


    return 0;
}

