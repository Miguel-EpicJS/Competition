#include <bits/stdc++.h>

using namespace std;

#define INF 9999999

int graph[501][501];
bool sel[501];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
	int x, y, z;
	cin >> x >> y >> z;
	graph[x][y] = z;
	graph[y][x] = z;
    }

    int ne = 0;

    sel[1] = true;

    int x, y;

    int ans = 0;
    while (ne < n-1)
    {
	int mn = INF;
	x = 0;
	y = 0;

	for (int i = 1; i <= n; i++)
	{
	    if (sel[i])
	    {
		for (int j = 1; j <= n; j++)
		{
		    if (!sel[j] && graph[i][j])
		    {
			if (mn > graph[i][j])
			{
			    mn = graph[i][j];
			    x = i;
			    y = j;
			}
		    }
		}
	    }
	}

	ans += graph[x][y];
	sel[y] = true;
	ne ++;
    }

    cout << ans << "\n";

    return 0;
}

