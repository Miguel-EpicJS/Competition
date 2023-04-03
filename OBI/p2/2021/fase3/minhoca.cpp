#include <bits/stdc++.h>

using namespace std;

int mDepth = -1;
int mdNode = 0;

vector<int> g[50001];
vector<bool> vis(50001);
vector<int>  d(50001);

void dfs(int src, int depth)
{
    vis[src] = true;
    d[src] = depth;
    if (depth >= mDepth)
    {
	mDepth = depth;
	mdNode = src;
    }

    for (auto e : g[src])
    {
	if (!vis[e])
	{
	    dfs(e, depth+1);
	}
    }
}

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n-1; i++)
    {
	int x, y;
	cin >> x >> y;

	g[x].push_back(y);
	g[y].push_back(x);

    }

    dfs(1, 0);
    vis.assign(n+2, false);
    dfs(mdNode, 0);

    cout << mDepth + 1 << "\n";

    int n1 = 0;
    for (int i = 1; i <= n; i++)
    {
	if (d[i] == mDepth)
	{
	    n1++;
	}
    }
    vis.assign(n+2, false);
    mDepth = 0;
    dfs(mdNode, 0);

    int n2 = 0;
    for (int i = 1; i <= n; i++)
    {
	if (d[i] == mDepth)
	{
	    n2++;
	}
    }

    cout << n1*n2 << "\n";
 

    return 0;
}
