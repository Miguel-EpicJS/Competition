#include <bits/stdc++.h>

using namespace std;

vector<string> dic;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
	string s;
	cin >> s;
	dic.push_back(s);
    }

    for (int i = 0; i < m; i++)
    {
	string ss;

	cin >> ss;

	for (auto d : dic)
	{
	    int dp[ss.size()+1][d.size()+1];

	    for (int ii = 0; ii <= ss.size(); ii++)
	    {
		for (int jj = 0; jj <= d.size(); jj++)
		{
		    if (ii==0)
		    {
			dp[ii][jj] = jj;
		    }
		    else if (jj == 0)
		    {
			dp[ii][jj] = ii;
		    }
		    else if (ss[ii-1] == d[jj-1])
		    {
			dp[ii][jj] = dp[ii-1][jj-1];
		    }
		    else
		    {
			dp[ii][jj] = 1 + min({dp[ii][jj-1], dp[ii-1][jj], dp[ii-1][jj-1]});
    		    }
		}
	    }
	    if (dp[ss.size()][d.size()] <= 2)
	    {
		cout << d << " ";
	    }

	}

	cout << "\n";
    }

    return 0;
}

