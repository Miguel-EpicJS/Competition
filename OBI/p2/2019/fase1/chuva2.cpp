#include <bits/stdc++.h>

using namespace std;

char mp[510][510];
bool vis[510][510];

int n, m;
void dfs(int x, int y)
{
    if (mp[x][y] == '#') return;
    if (x < 0 || x > n+2 || y < 0 || y > m+2) return;
    
    if (mp[x][y] == 'o')
    {
        dfs(x, y+1);
	dfs(x, y-1);

    }

    if (mp[x-1][y] == 'o')
    {
	mp[x][y] = 'o';
	dfs(x+1, y);
    }

    if (mp[x][y-1] == 'o' && mp[x+1][y-1] == '#')
    {
	mp[x][y] = 'o';
	dfs(x, y+1);
    }
    if (mp[x][y+1] == 'o' && mp[x+1][y+1] == '#')
    {
	mp[x][y] = 'o';
	dfs(x, y-1);
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x, y;

    cin >> n >> m;

    for (int i = 0; i < 510; i++)
    {
	for (int j = 0; j < 510; j++)
	{
	    mp[i][j] = '.';
	    vis[i][j] = true;
	}
    }
    for (int i = 0; i < n; i++)
    {
	for (int j = 0; j < m; j++)
	{
	    cin >> mp[i+2][j+2];
	    vis[i+2][j+2] = false;
	    if (mp[i+2][j+2] == 'o')
	    {
		x = i+2;
		y = j+2;
	    }
	}
    }

    dfs(x, y);

    for (int i = 0; i < n; i++)
    {
	for (int j = 0; j < m; j++)
	{
	    cout << mp[i+2][j+2];
	}
	cout << "\n";
    }



    return 0;
}

