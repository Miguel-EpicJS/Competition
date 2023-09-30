#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9+10;

int n, m, dist[100000];

vector<array<int, 2>> g[100000];

bool vis[100000];

void dijkstra(int src)
{
    for (int i = 0; i <= n; i++) dist[i] = inf;

    dist[src] = 0;

    priority_queue<array<int, 2>, vector<array<int, 2>>, greater<array<int, 2>>> pq;

    pq.push({0, src});

    while(!pq.empty())
    {
	int u = pq.top()[1];
	pq.pop();

	if (vis[u]) continue;

	vis[u] = 1;
	for (auto e : g[u])
	{
	    int v = e[0];
	    int w = e[1];
	    if (dist[v] > dist[u] + w)
	    {
		dist[v] = dist[u] + w;
		pq.push({dist[v], v});
	    }
	}
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    return 0;
}

