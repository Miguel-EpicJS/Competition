#include <bits/stdc++.h>

using namespace std;

int cnt[200001];

vector<int> adj[200001];
void dfs(int s, int e)
{
    cnt[s] = 1;
    for (auto u : adj[s])
    {
	if (u == e) continue;
	dfs(u, s);
	cnt[s] += cnt[u];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    for (int i = 2; i <= n; i++)
    {
	int x;
	cin >> x;
	adj[x].push_back(i);
	adj[i].push_back(x);
    }
    
    dfs(1, 0);

    for (int i = 1; i <= n; i++)
	cout << cnt[i]-1 << " ";

    return 0;
}

