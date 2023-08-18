#include <bits/stdc++.h>

using namespace std;

vector<array<int, 2>> graph[1002];

int n, m;
void dijkstra()
{
    vector<int> dist(1002, 1000000000);

    priority_queue<array<int, 2>> q;

    q.push({0, 0});

    dist[0] = 0;

    while(!q.empty())
    {
	int node = q.top()[1];
	q.pop();
	for (auto k : graph[node])
	{
	    int vert = k[1];
	    int d = -k[0];
	    if (dist[k[1]] > dist[node] + d)
	    {
		dist[k[1]] = dist[node] + d;
		q.push(k);
	    }
	}
    }

    cout << dist[n+1] << "\n";

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

	graph[x].push_back({-z, y});
	graph[y].push_back({-z, x});
    }

    dijkstra();

    return 0;
}

