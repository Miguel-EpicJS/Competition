#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> graph[110];


const int INF = 10000000;

void bfs(int s, int end)
{
    int n = end;
    vector<int> dis(n+1, INF), pre(n+1, -1);

    vector<bool> u(n+1, false);

    dis[s] = 0;

    for (int i = 1; i <= n; i++)
    {
	int v = -1;
	for (int j = 1; j <= n; j++)
	{
	    if (!u[j] && (v == -1 || dis[j] < dis[v]))
	    {
		v = j;
	    }
	}

	if (dis[v] == INF)
	    break;
	u[v] = true;

	for (auto e : graph[v])
	{
	    int to = e.second;
	    int len = e.first;
	    if (dis[v] + len < dis[to])
	    {
		dis[to] = dis[v] + len;
		pre[to] = v;
	    }
	}
    }

    cout << dis[end] << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
	int x, y, u;
	cin >> x >> y >> u;

	graph[x].push_back({u, y});
	graph[y].push_back({u, x});
    }

    bfs(1, n);

    return 0;
}

