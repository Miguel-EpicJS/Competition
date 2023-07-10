#include <bits/stdc++.h>

using namespace std;

char arr[1010][1010];

int n, m;

void dfs(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= m) return;
    if (arr[x][y] == '#') return;

    arr[x][y] = '#';

    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x, y+1);
    dfs(x, y-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
	for (int j = 0; j < m; j++)
	{
	    cin >> arr[i][j];
	}
    }

    int rooms = 0;

    for (int i = 0; i < n; i++)
    {
	for (int j = 0; j < m; j++)
	{
	    if (arr[i][j] == '.')
	    {
		rooms++;
		dfs(i, j);
	    }
	}
    }

    cout << rooms;

    return 0;
}

