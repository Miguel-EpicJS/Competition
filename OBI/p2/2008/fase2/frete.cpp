#include <bits/stdc++.h>

using namespace std;

int pai[100010];

vector<int> graph[100010];

vector<array<int, 3>> edges;

int find(int x)
{
    if (x == pai[x]) return x;
    return pai[x] = find(pai[x]);
}

void un(int x, int y)
{
    x = find(x);
    y = find(y);
    pai[x] = y;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
	int x, y, z;

	cin >> x >> y >> z;

	edges.push_back({z, x, y});
    }

    sort(edges.begin(), edges.end());

    for (auto e : edges)
    {
	if (find(e[1]) != find(e[2]))
	{
	    un(e[1], e[2]);
	    graph[e[1]].push_back(e[2]);
	    graph[e[2]].push_back(e[1]);
	}
    }

    return 0;
}

