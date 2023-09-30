#include <bits/stdc++.h>

using namespace std;

int n, m;

vector<int> g[100000];
bool vis[100000];

void dfs(int src)
{
    if (vis[src]) return;
    vis[src] = true;

    for (auto i : g[src])
    {
	dfs(i);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    return 0;
}

