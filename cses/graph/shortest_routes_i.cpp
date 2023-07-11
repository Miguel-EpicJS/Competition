#include <bits/stdc++.h>

using namespace std;

long long dist[100010];
bool vis[100010];

vector<pair<long long, long long>> graph[100010];

long long n, m;

void dijkstra()
{
    priority_queue<pair<long long, long long>> q; 
    for (int i = 0; i <= n; i++) dist[i] = 999999999999999LL;
    dist[1] = 0;

    q.push({0, 1});

    while(!q.empty())
    {
	long long a = q.top().second;
	q.pop();

	if (vis[a]) continue;
	vis[a] = true;

	for (auto u : graph[a])
	{
	    long long b = u.first, w = u.second;
	    if (dist[a]+w < dist[b])
	    {
		dist[b] = dist[a] + w;
		q.push({-dist[b], b});
	    }
	}
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n >> m;

    for (long long i = 0; i < m; i++)
    {
	long long x, y, z;
	cin >> x >> y >> z;
	graph[x].push_back({y, z});
    }

    dijkstra();

    for (long long i = 1; i <= n; i++) cout << dist[i] << " ";

    return 0;
}

