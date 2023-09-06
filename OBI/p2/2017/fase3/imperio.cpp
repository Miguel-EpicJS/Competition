#include <bits/stdc++.h>

using namespace std;

vector<int> g[100011];

bool vis[100011];
int sons[100011];

void dfs(int src, int dad)
{
    sons[src] = 1;

    for (int i : g[src])
    {
	if (i != dad)
	{
	    dfs(i, src);
	    sons[src] += sons[i];
	}
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x, y;

    cin >> n;

    for (int i = 1; i < n; i++)
    {
	cin >> x >> y;

	g[x].push_back(y);
	g[y].push_back(x);
    }

    memset(sons, 0, sizeof(sons));

    dfs(1, 0);
    int m = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
	m = min(abs(sons[i] - (n - sons[i])), m);
    }
    

    cout << m << "\n";

    return 0;
}

