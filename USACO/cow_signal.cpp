#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("cowsignal.in", "r", stdin);

    int cols, rows, k;

    cin >> cols >> rows >> k;

    vector<vector<char>> signal(cols);
    vector<vector<char>> augm;

    for (int i = 0; i < cols; i++)
    {
	for (int j = 0; j < rows; j++)
	{
	    char x;
	    cin >> x;
	    signal[i].push_back(x);
	    for (int l = j; l < j+k-1; l++)
	    {
		signal[i].push_back(x);
	    }
	}
    }

    for (int i = 0; i < cols; i++)
    {
	for (int j = 0; j < k; j++)
	{
	    augm.push_back(signal[i]);
	}
    }

    freopen("cowsignal.out", "w", stdout);

    for (int i = 0; i < augm.size(); i++)
    {
	for (int j = 0; j < augm[i].size(); j++)
	{
	    cout << augm[i][j];
	}
	cout << "\n";
    }
    
    return 0;
}

