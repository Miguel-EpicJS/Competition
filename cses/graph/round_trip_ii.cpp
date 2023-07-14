#include <bits/stdc++.h>

using namespace std;

int n, m, start, ed;

vector<int> graph[100010];

bool vis[100010];
int heads[100010];

stack<int> s;

bool dfs(int src, int parent)
{
    vis[src] = true;
    heads[src] = parent;
    for (auto i : graph[src])
    {
	if (i == parent) continue;
	if (vis[i]){ start = i; ed = src; return true;}
	else
	{
	    if (dfs(i, src)) return true;
	}
    }
    return ed;
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
    }

    bool cycle;

    for (int i = 1; i <=n; i++)
    {
	if (!vis[i]) cycle = dfs(i, 0);
	if (cycle) break;
    }

    if (!cycle){ cout << "IMPOSSIBLE\n"; return 0;}

    vector<int> ans;
    ans.push_back(ed);
    while(ed != start)
    {
	ans.push_back(heads[ed]);
	ed = heads[ed];
    }
    ans.push_back(ans[0]);

    cout << ans.size() << "\n";

    reverse(ans.begin(), ans.end());

    for (auto i : ans) cout << i << " ";
    return 0;
}

