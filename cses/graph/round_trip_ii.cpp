#include <bits/stdc++.h>

using namespace std;

int n, m;

vector<int> graph[100010];

bool vis[100010], flag[100010];

stack<int> rec;

bool dfs(int u)
{
    vis[u] = true;
    
    rec.push(u);
    
    flag[u] = true;

    for (auto v : graph[u])
    {
	if (!vis[v])
	    if (dfs(v)) return true;
	if(flag[v])
	{
	    rec.push(v);
	    return true;
	}
    }

    rec.pop();
    flag[u] = false;
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
    }
    
    for (int i = 1; i <= n; i++)
    {
	if (!vis[i])
	    if (dfs(i)) break;
    }

    if (rec.empty()) 
    {
	cout << "IMPOSSIBLE\n";
	return 0;
    }
    vector<int> ans;

    int temp = rec.top();
    while(!rec.empty())
    {
	ans.push_back(rec.top());
	rec.pop();
	if (ans.back() == temp && ans.size() != 1)
	    break;
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for (auto i : ans) cout << i << " ";

    return 0;
}

