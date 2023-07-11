#include <bits/stdc++.h>

using namespace std;

long long inf = 1e17;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    vector<vector<long long>> edges;

    for (int i = 0; i < m; i++)
    {
	long long x, y, z;
	cin >> x >> y >> z;
	edges.push_back({x, y, -z});
    }

    vector<long long> dist(n+1, inf);

    dist[1] = 0;

    for (int i = 0; i < n; i++)
    {
	for (auto e : edges)
	{
	    long long u = e[0], v = e[1], w = e[2];
	    if(dist[u] == inf) continue;
	    dist[v] = min(dist[v], dist[u]+w);
	    dist[v] = max(dist[v], -inf);
	}
    }

    for (int i = 0; i < n; i++)
    {
	for (auto e : edges)
	{
	    int u = e[0], v = e[1], w = e[2];
	    if(dist[u] == inf) continue;
	    dist[v] = max(dist[v], -inf);
	    if (dist[v] > dist[u] + w) dist[v] = -inf;
	}
    }

    if (dist[n] == -inf || dist[n] == inf) cout << "-1\n";
    else cout << -dist[n] << "\n";

    return 0;
}

