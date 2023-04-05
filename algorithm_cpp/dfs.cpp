#include <bits/stdc++.h>

using namespace std;

vector<int> graph[1000];
vector<bool> vis(1000);

void dfs(int src)
{
    vis[src] = true;
    cout << src << " ";

    for (auto i : graph[src])
    {
	if (!vis[i])
	{
	    dfs(i);
	}
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, start;

    cin >> n >> m >> start;

    for (int i = 0; i < m; i++)
    {
	int x, y;
	cin >> x >> y;
	graph[x].push_back(y);
	graph[y].push_back(x);
    }

    dfs(start);
    cout << "\n";
    return 0;
}

