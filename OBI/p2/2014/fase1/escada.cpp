#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    int arr[n][m];
    string ans = "S\n";

    bool allZ = false;

    for (int i = 0; i < n; i++)
    {
	int z = 0;
	for (int j = 0; j < m; j++)
	{
	    cin >> arr[i][j];
	    if (arr[i][j] == 0)
	    {
		z++;
	    }
	    else if (allZ)
	    {
		ans = "N\n";
		cout << ans;
		return 0;
	    }
	}
	if (z == m)
	{
	    allZ = true;
	}
    }


    int levels[n];

    for (int i = 0; i < n; i++)
    {
	levels[i] = 0;
	for (int j = 0; j < m; j++)
	{
	    if (arr[i][j] != 0 && levels[i] == 0)
	    {
		levels[i] = j;
		break;
	    }
	}
    }

    for (int i = 0; i < n-1; i++)
    {
	if (levels[i] >= levels[i+1] && levels[i+1] != 0)
	{
	    ans = "N\n";
	    break;
	}
    }

    cout << ans;

    return 0;
}

