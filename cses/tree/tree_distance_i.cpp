#include <bits/stdc++.h>

using namespace std;

vector<int> graph[200001];

int fM[200001];
int sM[200001];
int c[200001];

void dfs(int v, int p)
{
    fM[v] = 0;
    sM[v] = 0;

    for (auto x : graph[v])
    {
	if (x == p) continue;
	dfs(x, v);
	if (fM[x] + 1 > fM[v])
	{
	    sM[v] = fM[v];
	    fM[v] = fM[x] + 1;
	    c[v] = x;
	}
	else if (fM[x] + 1 > sM[v])
	{
	    sM[v] = fM[x] + 1;
	}
    }
}

void dfs2(int v, int p)
{
    for (auto x : graph[v])
    {
	if (x == p)
	{
	    continue;
	}
	if (c[v] == x)
	{
	    if (fM[x] < sM[v] + 1)
	    {
		sM[x] = fM[x];
		fM[x] = sM[v] + 1;
		c[x] =v;
	    }
	    else
	    {
		sM[x] = max(sM[x], sM[v] + 1);
	    }
	}
	else
	{
	    sM[x] = fM[x];
	    fM[x] = fM[v] + 1;
	    c[x] = v;
	}
	dfs2(x, v);
    }
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
	int a, b;

	cin >> a >> b;

	graph[a].push_back(b);
	graph[b].push_back(a);
    }

    dfs(1, -1);
    dfs2(1, -1);

    for (int i = 1; i <= n; i++)
    {
	cout << fM[i] << " ";
    }

    return 0;
}

