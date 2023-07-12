#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;

    cin >>t;

    while (t--)
    {
	int n, m, x, y;

	cin >> n >> m >> x >> y;

	int white = 0;
	int cwhite = 0;

	char k;

	long long tot = 0, rtot = 0;

	string fim = "";

	for (int i = 0; i < n; i++)
	{
	    for (int j = 0; j < m; j++)
	    {
		cin >> k;
		if (k == '.')
		{
		    white++;
		}
	    		
		fim+=k;	
	    }
	    fim += '*';
	}

	if (2*x <= y)
	{ 
	    tot = white*x;
	    cout << tot << "\n";
	}
	else
	{
	    int contw = 0;
	    for (int i = 0; i < fim.size(); i++)
	    {
		if (fim[i] == '.')
		{
		    contw++;
		}
		else
		{
		    tot += contw/2 * y;
		    if (contw%2 == 1) tot += x;
		    contw= 0;
		}
	    }

	    cout << tot << "\n";
	}

    }

    return 0;
}

