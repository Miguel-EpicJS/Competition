#include <bits/stdc++.h>

using namespace std;

int vis[5000][5000];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("mowing.in", "r", stdin);
    freopen("mowing.out", "w", stdout);

    int n;

    cin >> n;


    int x = 2500, y = 2500, t = 1, ans = INT_MAX;

    memset(vis, 0, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
	char k;
	int m;
	
	cin >> k >> m;

	if (k == 'N')
	{
	    for (int j = 0; j < m; j++)
	    {
		if (vis[x][y] != 0) ans = min(ans, t - vis[x][y]);
		vis[x][y] = t;
		x++;
		t++;
	    }
	}

	if (k == 'S')
	{
	    for (int j = 0; j < m; j++)
	    {
		if (vis[x][y] != 0) ans = min(ans, t - vis[x][y]);
		vis[x][y] = t;
		x--;
		t++;
	    }
	}

	if (k == 'W')
	{
	    for (int j = 0; j < m; j++)
	    {
		if (vis[x][y] != 0) ans = min(ans, t - vis[x][y]);
		vis[x][y] = t;
		y++;
		t++;
	    }
	}
	if (k == 'E')
	{
	    for (int j = 0; j < m; j++)
	    {
		if (vis[x][y] != 0) ans = min(ans, t - vis[x][y]);
		vis[x][y] = t;
		y--;
		t++;
	    }
	}
    }


    if (ans == INT_MAX) ans = -1;

    cout << ans << "\n";


    return 0;
}

