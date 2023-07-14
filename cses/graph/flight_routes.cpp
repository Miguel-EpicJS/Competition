#include <bits/stdc++.h>

using namespace std;

long long n, m, k;

vector<vector<pair<long long, long long>>> g;
vector<vector<long long>> dist;
const long long INF = 9e15;

void sssp()
{
    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;

    pq.push({0, 1});

    while(!pq.empty())
    {
	long long u = pq.top().second;
	long long d = pq.top().first;

	pq.pop();

	if (dist[u][k-1] < d) continue;

	for (auto e : g[u])
	{
	    long long v = e.first;
	    long long c = e.second;
	    if (dist[v][k-1] > c+d)
	    {
		dist[v][k-1] = c+d;
		pq.push({dist[v][k-1], v});
		sort(dist[v].begin(), dist[v].end());
	    }
	}
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> k;
    
    g.resize(n+1);
    dist.resize(n+1);

    for (long long i = 1; i <= n; i++)
    {
	dist[i].resize(k);
	for (long long j = 0; j < k; ++j)
	{
	    dist[i][j] = INF;
	}
    }

    dist[1][0] = 0;

    for(long long i = 0; i < m; i++)
    {
	long long x, y, z;
	cin >> x >> y >> z;

	g[x].push_back({y, z});
    }

    sssp();

    for (long long i = 0; i < k; ++i)
    {
	cout << dist[n][i] << " ";
    }

    return 0;
}

