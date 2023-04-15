#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> graph[10001];

const int INF = 100001;

int n, m;

void bfs(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<int> dist(n+10, INF);

    dist[src] = 0;

    while (!pq.empty())
    {
	int u = pq.top().second;
	pq.pop();

	for (auto i : graph[u])
	{
	    int v = i.first;
	    int weight = i.second;


	    if (dist[v] > dist[u]+weight)
	    {
		dist[v] = dist[u] + weight;
		pq.emplace(dist[v], v);
	    }
	}
    }
    
    cout << "\n";

    for (int i = 0; i < n; i++)
    {
	cout << i << ": " << dist[i] << "\n";
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
	int x, y, z;
	cin >> x >> y >> z;
	graph[x].emplace_back(y, z);
	graph[y].emplace_back(x, z);
    }

    bfs(0);

    return 0;
}

