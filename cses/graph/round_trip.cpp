#include <bits/stdc++.h>

using namespace std;

vector<int> graph[100010];
bool vis[100010];
int heads[100010];
stack<int> s;

int n, m, sl, el;

bool dfs(int src, int parent)
{
    vis[src] = true;
    heads[src] = parent;
    for (auto child : graph[src])
    {
	if (child == parent) continue;
	if (vis[child]){ sl = child; el = src; return true;}
	else
	{
	    if (dfs(child, src)) return true;
	}
    }
    return false;
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
    
    bool cycle;

    for (int i = 1; i <=n; i++)
    {
	if (!vis[i]) cycle = dfs(i, 0);
	if (cycle) break;
    }

    if (!cycle){ cout << "IMPOSSIBLE\n"; return 0;}

    vector<int> ans;
    ans.push_back(el);
    while(el != sl)
    {
	ans.push_back(heads[el]);
	el = heads[el];
    }
    ans.push_back(ans[0]);

    cout << ans.size() << "\n";
    for (auto i : ans) cout << i << " ";

    return 0;
}

