#include <bits/stdc++.h>

using namespace std;

long long graph[510][510];

long long n, m, q;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n >> m >> q;

    for (int i = 0; i < 510; i++)
	for (int j = 0; j < 510; j++)
	    graph[i][j] = 99999999999999LL;

    for (long long i = 0; i < m; i++)
    {
	long long x, y, z;
	cin >> x >> y >> z;
	graph[x][x] = 0;
	graph[y][y] = 0;
	graph[x][y] = min(z, graph[x][y]);
	graph[y][x] = graph[x][y];
    }


    for (int k = 1; k <= n; k++)
    {
	for (int i = 1; i <= n; i++)
	{
	    for (int j = 1; j <= n; j++)
	    {
		graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
	    }
	}
    }

    for (int i = 0; i < q; i++)
    {
	int x, y;
	cin >> x >> y;

	if (graph[x][y] == 99999999999999LL) cout << "-1\n";
	else cout << graph[x][y] << "\n";
    }

    return 0;
}

