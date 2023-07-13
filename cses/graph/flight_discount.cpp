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
	    long long alt = dist[u] + i.second;
	    if (alt < dist[i.first])
	    {
		dist[i.first] = alt;
		pre[i.first] = u;
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

    for (int i = 0; i < m; i++)
    {
	int x, y, z;
	cin >> x >> y >> z;

	graph[x].push_back({y, z});
    }



    return 0;
}

