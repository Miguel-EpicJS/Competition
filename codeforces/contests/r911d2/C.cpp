#include <bits/stdc++.h>
using namespace std;

int dfs(int n, vector<bool> &leafs, vector<int> &dist, string &s, vector<pair<int, int>> &nodes)
{
    if (leafs[n] == true){ dist[n] = 0; return 0;}
    if (n == 0) return 1e9;

    dist[n] = min(dfs(nodes[n].first, leafs, dist, s, nodes), dfs(nodes[n].second, leafs, dist, s, nodes))+1;
    return dist[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while(t--)
    {
	int n;
	cin >> n;

	string s;
	cin >> s;

	vector<bool> leafs(n+1, false);

	vector<pair<int, int>> nodes(n+1);

	vector<int> distLeaf(n+1, 1e9);

	for (int i = 1; i <= n; i++)
	{
	    int x, y;
	    cin >> x >> y;
	    nodes[i] = {x, y};
	    if (x == y && x == 0) leafs[i] = true;
	}

	dfs(1, leafs, distLeaf, s, nodes);
	int ans = 0;
	

    }

    return 0;
}

