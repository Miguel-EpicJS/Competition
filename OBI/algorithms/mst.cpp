#include <bits/stdc++.h>

using namespace std;

int n, m;

int pai[10000], w[10000];

vector<array<int, 3>> edges;
vector<array<int, 2>> g[10000];

int find(int x)
{
    if (pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

void join(int x, int y)
{
    x = find(x);
    y = find(y);

    if (w[x] < w[y]) pai[x] = y;
    else if (w[x] > w[y]) pai[y] =x;
    else
    {
	pai[x] = y;
	w[y]++;
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
	int x, y ,z;
	cin >> x >> y >> z;
	edges.push_back({z, x, y});
    }

    for (int i = 1; i <= n; i++) pai[i] = 1, w[i] = 0;

    sort(edges.begin(), edges.end());

    int ans = 0;

    for (auto i : edges)
    {
	if (find(i[1]) != find(i[2]))
	{
	    join(i[1], i[2]);
	    ans += i[0];
	}
    }


    return 0;
}

