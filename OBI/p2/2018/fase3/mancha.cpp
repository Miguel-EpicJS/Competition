#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    char arr[n+1][n+1];

    for (int i = 0; i < n; i++)
	for (int j = 0; j < n; j++)
	    cin >> arr[i][j];

    
    int lastc = 0;

    bool ok = true;

    for (int i = 0; i < n; i++)
    {
	lastc = 0;
	for (int j = 0; j < n; j++)
	{
	    if (arr[i][j] == '*' && lastc == 0)
	    {
		lastc = 1;
	    }
	    else if (arr[i][j] == '.' && lastc == 1 )
	    {
		lastc = 2;
	    }
	    else if (arr[i][j] == '*' && lastc == 2)
	    {
		ok = false;
		i = n+1;
		break;
	    }
	}
    }

    if (ok)
    {

	for (int j = 0; j < n; j++)
	{
	    lastc = 0;
	    for (int i = 0; i < n; i++)
	    {
		if (arr[i][j] == '*' && lastc == 0)
		{
		    lastc = 1;
		}
		else if (arr[i][j] == '.' && lastc == 1 )
		{
		    lastc = 2;
		}
		else if (arr[i][j] == '*' && lastc == 2)
		{
		    ok = false;
		    j = n+1;
		    break;
		}
	    }
	}

    }

    if (ok) cout << "S\n";
    else cout << "N\n";

    return 0;
}

