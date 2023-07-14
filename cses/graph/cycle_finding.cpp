#include <bits/stdc++.h>

using namespace std;

int n, m;

vector<vector<int>> edges;

void bellmanford()
{
    vector<long long> dist(n+5, 0);
    vector<int>  relaxant(n+5, 0);

    int x;

    for (int i = 0; i < n; ++i)
    {
	x = -1;
	for (const auto& edge : edges)
	{
	    int u = edge[0];
	    int v = edge[1];
	    int weight = edge[2];

	    if (dist[u] + weight < dist[v])
	    {
		dist[v] = dist[u] + weight;
		relaxant[v] = u;
		x = v;
	    }
	}
    }

    if (x != -1)
    {
	cout << "YES\n";

	for (int i = 1; i<= n; i++)
	{
	    x = relaxant[x];
	}

	stack<int> cycle;

	for (int v = x; ; v = relaxant[v])
	{
	    cycle.push(v);
	    if(v == x && cycle.size() > 1) break;
	}
	
	while(!cycle.empty())
	{
	    cout << cycle.top() << " ";
	    cycle.pop();
	}

	cout << "\n";
    }
    else
    {
	cout << "NO\n";
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

	edges.push_back({x, y, z});
    }

    bellmanford();

    return 0;
}

