#include <bits/stdc++.h>

using namespace std;

char mapa[101][101];

int lx, ly, sx, sy;

void dfs(int x, int y)
{
    if (mapa[x][y] != 'H' && mapa[x][y] != 'o') return;

    mapa[x][y] = '.';

    lx = x;
    ly = y;
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

    int n, m;

    cin >> n >> m;
    

    for (int i = 1; i <= n; i++)
    {
	for (int j = 1; j <= m; j++)
	{
	    cin >> mapa[i][j];
	    if (mapa[i][j] == 'o')
	    {
		sx = i, sy = j;
	    }
	}
    } 
    dfs(sx, sy);

    cout << lx << " " << ly << "\n";

    return 0;
}

