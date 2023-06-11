#include <bits/stdc++.h>

using namespace std;

vector<int> g[100010];
vector<int> cnt(100010, 0);
vector<bool> vis(100010);

int dfs(int root)
{
    if (vis[root]) return 0;
    vis[root] = true;
    int c = 1;

    for (auto i : g[root])
    {
	c += dfs(i);
    }

    cnt[root] = c;
    return cnt[root];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;


    for (int i = 0; i < n-1; i++)
    {
	int x, y;
	cin >> x>>y;
	g[x].push_back(y);
	g[y].push_back(x);
    }

    int tot = dfs(1);
    int m = 99999;
    for (int i = 2; i <= n; i++)
    {
	int su = cnt[i];
	
	m = min(m, abs(su- tot - su) );
    }

    cout << m;

    return 0;
}

