#include <bits/stdc++.h>

using namespace std;


vector<int> edges[200001];

int ans = 0;

bool done[200001];

void dfs(int src, int father)
{
    for (int i : edges[src])
    {
	if (i != father)
	{
	    dfs(i, src);
	    if (!done[i] && !done[src]) done[i] = done[src] = 1, ans++;
	}
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
	edges[a].push_back(b);
	edges[b].push_back(a);
    }

    dfs(1, 0);

    cout << ans << "\n";

    return 0;
}

