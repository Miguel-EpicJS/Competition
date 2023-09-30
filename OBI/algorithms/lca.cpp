#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+10;
const int maxl = 31;

int n, c[maxn], par[maxn];

int pai[maxn], nivel[maxn], ancestral[maxn][maxl];

vector<int> g[maxn];

void dfs(int u)
{
    for (int v : g[u])
    {
	if (nivel[v] == -1)
	{
	    pai[v] = u;
	    nivel[v] = nivel[u]+1;
	    dfs(v);
	}
    }
}

int lca(int u, int v)
{
    if (nivel[u] < nivel[v]) swap(u, v);

    for (int i = maxl-1; i >= 0; i--)
    {
	if (nivel[u] - (1<<i) >= nivel[v])
	    u = ancestral[u][i];
    }
    
    if (u==v) return u;

    for (int i = maxl-1; i >= 0; i--)
    {
	if (ancestral[u][i] != -1 && ancestral[u][i] != ancestral[v][i])
	{
	    u = ancestral[u][i];
	    v = ancestral[v][i];
	}
    }

    return ancestral[u][0];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 0;i < maxn;i++) pai[i] = nivel[i] = -1;
    for(int i = 0;i < maxn;i++)
    for(int j = 0;j < maxl;j++)
        ancestral[i][j] = -1;
    
    nivel[1] = 0;
    dfs(1);
    
    for(int i = 1;i <= n;i++) ancestral[i][0] = pai[i];
    
    for(int j = 1;j < maxl;j++)
    for(int i = 1;i <=   n;i++)
        ancestral[i][j] = ancestral[ ancestral[i][j-1] ][j-1];

    return 0;
}

