#include <bits/stdc++.h>

using namespace std;

vector<int> g[200000];
bool vis[200000];

int n, k, w;

int c = 0;

void dfs(int src)
{
    vis[src] = true;
    c++;

    for (auto e : g[src])
    {
	if (vis[e] || e == w)
	{
	    continue;
	}
	dfs(e);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;

    for (int i = 0; i < k; i ++)
    {
	int x, y;
	cin >> x >> y;
	g[x].push_back(y);
	g[y].push_back(x);
    }

    cin >> w;

    if (w == 2)
    {
	dfs(1);
    }
    else
    {
	dfs(2);
    }

    if (c == n-1)
    {
	cout << "Connected\n";
    }
    else
    {
	cout << "Not Connected\n";
    }

    return 0;
}

