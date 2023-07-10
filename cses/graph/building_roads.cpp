#include <bits/stdc++.h>

using namespace std;

vector<int> graph[100010];
bool vis[100010];

void dfs(int src)
{
    if (vis[src]) return;
    vis[src] = true;
    for (auto child : graph[src])
    {
	dfs(child);
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
	graph[x].push_back(y);
	graph[y].push_back(x);
    }

    int ans = 0;

    dfs(1);

    vector<pair<int, int>> a;

    for (int i = 1; i<= n; i++)
    {
	if (!vis[i])
	{
	    ans++;
	    a.push_back({1, i});
	    dfs(i);
	}
    }

    cout << ans << "\n";

    for (int i = 0; i < a.size(); i++)
    {
	cout << a[i].first << " " << a[i].second << "\n";
    }

    return 0;
}

