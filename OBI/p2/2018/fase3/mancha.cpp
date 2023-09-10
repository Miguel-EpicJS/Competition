#include <bits/stdc++.h>

using namespace std;

char arr[1010][1010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
	for (int j = 1; j <= n; j++)
	{
	    cin >> arr[i][j];
	}
    }
    bool ok = true;

    int sig = 0;
    for (int i = 1; i <= n; i++)
    {
	sig = 0;
	for (int j = 1; j <= n; j++)
	{
	    if (arr[i][j] == '*')
	    {
		if (sig == 0) sig = 1;
		else if (sig == 2)
		{
		    cout << "N\n";
		    return 0;
		}
	    }
	    else
	    {
		if (sig == 1) sig = 2;
	    }
	}
    }
    sig = 0;
    for (int j = 1; j <= n; j++)
    {
	sig = 0;
	for (int i = 1; i <= n; i++)
	{
	    if (arr[i][j] == '*')
	    {
		if (sig == 0) sig = 1;
		else if (sig == 2)
		{
		    cout << "N\n";
		    return 0;
		}
	    }
	    else
	    {
		if (sig == 1) sig = 2;
	    }
	}
    }

    cout << "S\n";
    
    return 0;
}

