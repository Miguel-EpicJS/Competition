#include <bits/stdc++.h>

using namespace std;

vector<int> g[100010];
bool vis[100010];

int c = 0;

void dfs(int root)
{
    vis[root] = true;
    c++;
    for (auto e : g[root])
    {
	if (vis[e])
	    continue;

	dfs(e);
    }
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
	int x, y;
	cin >> x >> y;

	g[y].push_back(x);
	g[x].push_back(y);
    }

    int r;

    cin >> r;

    dfs(r);

    cout << n - c << "\n";

    return 0;
}

