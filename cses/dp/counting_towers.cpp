#include <bits/stdc++.h>

using namespace std;

const int nax = 1e6+10;
const int mod = 1e9+7;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<long long>> nts(nax, vector<long long>(8, 0));

    for (int i = 0; i < 8; i++)
    {
	nts[0][i] = 1;
    }

    for (int i = 1; i < nax; i++)
    {
	for (int j = 0; j < 8; j++)
	{
	    if (j <= 5 && j != 1)
	    {
		nts[i][j] = (nts[i-1][0] + nts[i-1][1] + nts[i-1][3] + nts[i-1][4] + nts[i-1][5]) % mod;
	    }
	    else
	    {
		nts[i][j] = (nts[i-1][2] + nts[i-1][6] + nts[i-1][7]) % mod;
	    }
	}
    }

    int t;

    cin >> t;

    while (t--)
    {
	int n;
	cin >> n;

	cout << (nts[n-1][2] + nts[n-1][6]) % mod << "\n";
    }

    return 0;
}

