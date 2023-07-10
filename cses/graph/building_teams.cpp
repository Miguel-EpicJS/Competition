#include <bits/stdc++.h>

using namespace std;

vector<int> graph[100010];
bool vis[100010], color[100010];

bool imp;

int n, m;

void dfs(int src, int head, bool col)
{
    if (vis[src])
    {
	if (color[src] == color[head]) imp = true;
	return;
    }

    vis[src] = true;
    color[src] = col;
    
    for (auto i : graph[src])
    {
	dfs(i, src, !col);
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
	int x, y;
	cin >> x >> y;
	graph[x].push_back(y);
	graph[y].push_back(x);
    }

    for (int i = 1; i <= n; i++)
    {
	if (vis[i] == false) dfs(i, 0, false);
    }

    if (!imp)
    {
	for (int i = 1; i <= n; i++)
	{
	    cout << color[i] + 1 << " ";
	}
    }
    else
    {
	cout << "IMPOSSIBLE\n";
    }
    return 0;
}

