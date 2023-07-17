#include <bits/stdc++.h>

using namespace std;

vector<int> sizes(10000);
vector<int> graph[10000];

int dist[10000];

int dfs(int src)
{
    if (dist[src] != -1) return dist[src];
    dist[src] = 0;
    for (auto x : graph[src])
    {
	dist[src] = max(dist[src], dfs(x)+1);
    }

    return dist[src];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, a;

    cin >> n >> m >> a;


    for (int i = 1; i <= n; i++)
    {
	cin >> sizes[i];
    }

    for (int i = 0; i < m; i++)
    {
	int x, y;
	cin >> x >> y;
	if (sizes[x] > sizes[y]) swap(x, y);
	if (sizes[x] == sizes[y]) continue;
	graph[y].push_back(x);
    }

    memset(dist, -1, sizeof(dist));

    dfs(a);

    cout << dist[a] << "\n";

    return 0;
}

