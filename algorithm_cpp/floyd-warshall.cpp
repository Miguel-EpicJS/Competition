#include <bits/stdc++.h>

using namespace std;


int dist[1000][1000];

void floyd(int size)
{
    for (int k = 0; k < size; k++)
	for (int i = 0; i < size; i++)
	    for (int j = 0; j < size; j++)
		dist[i][j] = min(dist[i][j], dist[k][j] + dist[i][k]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, start, end;

    for (int i = 0; i < 1000; i++)
	for (int j = 0; j < 1000; j++)
	    dist[i][j] = 50000;

    cin >> n >> m >> start >> end;

    for (int i = 0; i < m; i++)
    {
	int x, y, z;
	cin >> x >> y >> z;
	dist[x][y] = z;
	dist[y][x] = z;
    }

    floyd(n);
    cout << dist[start][end] << "\n";
    return 0;
}

