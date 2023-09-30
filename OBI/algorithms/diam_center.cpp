#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+10;
const int inf =  1e9+10;

int n;

int pai[maxn];
int dist[2][maxn];

vector<int> grafo[maxn];

void dfs(int u, int p, int d, int q)
{
    dist[q][u] = d;
    pai[u] = p;

    for (auto v : grafo[u])
    {
	if (v != p) dfs(v, u, d+1, q);
    }
}

int find_center(int u, int v)
{
    dfs(u, -1, 0, 0);
    dfs(v, -1, 0, 1);

    int at = u, mn = inf, c = u;

    while(at)
    {
	if (max(dist[0][at], dist[1][at]) < mn)
	    mn = max(dist[0][at], dist[1][at]), c = at;

	at = pai[at];
    }
    return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    return 0;
}

