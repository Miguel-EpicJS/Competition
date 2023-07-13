#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> graph[100010];

long long dist[100010];
int pre[100010];
bool vis[100010];

int n, m;

void dijkstra()
{
    for (int i = 0; i <= n; i++)
    {
	dist[i] = 999999999999999LL;
	pre[i] = 0;
    }

    dist[1] = 0;
    dist[0] = 0;
    priority_queue<pair<int, int>> q;

    q.push({0, 1});

    while(!q.empty())
    {
	int u = q.top().second;
	q.pop();

	if (vis[u]) continue;

	vis[u] = true;

	for (auto i : graph[u])
	{
	    int v = i.first;
	    long long w = i.second;

	    long long alt = dist[u] + w;

	    if (alt < dist[i.first])
	    {
		dist[v] = alt;
		pre[v] = u;
		q.push({-dist[v], v});
	    }
	}
    }

    vector<int> sis;

    int current = n;

    while(current != 0)
    {
	int bef = pre[current];
	sis.push_back(dist[current] - dist[bef]);
	current = bef;
    }

    auto it = max_element(sis.begin(), sis.end());

    long long oldv = *it;

    *it = (*it)/2;

    long long old = dist[n];

    dist[n] -= (oldv - *it);
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

	graph[x].push_back({y, z});
    }

    dijkstra();

    cout << dist[n] << "\n";

    return 0;
}

