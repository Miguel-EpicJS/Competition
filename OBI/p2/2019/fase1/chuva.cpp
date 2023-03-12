#include <bits/stdc++.h>

using namespace std;

int n, m, x, y;

char a[510][510];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;


    for (int i = 2; i < n+2; i++)
    {
	for (int j = 2; j < m+2; j++)
	{
	    cin >> a[i][j];
	    if (a[i][j] == 'o')
	    {
		x = i;
		y = j;
	    }
	}
    }

    for (int k = 0; k < n+2; k++)
    {
    for (int i = 0; i < n+2; i++)
    {
	for (int j = 0; j < m+2; j++)
	{
	    if (a[i][j] == '#')
	    {
		continue;
	    }
	    if (a[i-1][j] == 'o')
	    {
		a[i][j] = 'o';
	    }
	    if (a[i][j-1] == 'o' && a[i+1][j-1] == '#')
	    {
		a[i][j] = 'o';
	    }
	    if (a[i][j+1] == 'o' && a[i+1][j+1] == '#')
	    {
		a[i][j] = 'o';
	    }

	}
    }
    }

    for (int i = 2; i < n+2; i++)
    {
	for (int j = 2; j < m+2; j++)
	{
	    cout << a[i][j];
	}
	cout << "\n";
    }


    return 0;
}

