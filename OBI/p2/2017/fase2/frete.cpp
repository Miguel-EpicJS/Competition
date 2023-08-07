#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    int dist[101][101];
    
    for (int i = 0; i < 101; i++)
    {
	for (int j = 0; j < 101; j++)
	{
	    dist[i][j] = 99999999;
	}
    }

    for (int i = 1; i <= n; i++)
    {
	dist[i][i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
	int x, y, z;

	cin >> x >> y >> z;

	dist[x][y] = z;
	dist[y][x] = z;
    }


    for (int k = 1; k <= n; k++)
	for (int i = 1; i <= n; i++)
	    for (int j = 1; j <= n; j++)
		dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);


    cout << dist[1][n] << "\n";

    return 0;
}

