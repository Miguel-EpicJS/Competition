#include <bits/stdc++.h>

using namespace std;

int n, m;
char v;

char a[501][501];

void dfs(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= n)
    {
	return;
    }

    if (a[x][y] == '*' || a[x][y] > v)
    {
	return;
    }

    a[x][y] = '*';

    dfs(x+1, y);
    dfs(x, y+1);
    dfs(x-1, y);
    dfs(x, y-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    v = '0' + m;
    
    for (int i = 0; i < n; i++)
    {
	for (int j = 0; j < n; j++)
	{
	    cin >> a[i][j];
	}
    }

    dfs(0, 0);

    for (int i = 0; i < n; i++)
    {
	for (int j = 0; j < n; j++)
	{
	    cout << a[i][j];
	}
	cout << "\n";
    }



    return 0;
}

