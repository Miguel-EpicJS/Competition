#include <bits/stdc++.h>

using namespace std;

void dfs(int src, set<int> &marked, vector<vector<int>> &graph, vector<bool> &vis, int dist, int &maxD, int &maxN)
{
    if (vis[src]) return;

    if (marked.find(src) != marked.end())
    {
	if(dist > maxD)
	{
	    maxD = dist;
	    maxN = src;
	}
    }

    vis[src] = true;


    for (auto i : graph[src])
    {
	dfs(i, marked, graph, vis, dist+1, maxD, maxN);
    }

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
	int k, w, a, b, c, n, m;
	cin >> n >> k;
	
	set<int> marked;
	vector<vector<int>> graph(n+10);
	vector<bool> vis(n+10, false);
	for (int i = 0; i < k; i++)
	{
	    cin >> c;
	    marked.insert(c);
	}

	for (int i = 1; i < n; i++)
	{
	    cin >> a >> b;

	    graph[a].push_back(b);
	    graph[b].push_back(a);

	}

	if (k == 1) cout <<"0\n";
	else
	{
	    int currN = c;
	    int currD = 0;
    
	    dfs(c, marked, graph, vis, 0, currD, currN);
	    fill(vis.begin(), vis.end(), false);
	    dfs(currN, marked, graph, vis, 0, currD, currN);

	    cout << ceil(currD/2.0) << "\n";
	}

    }

    return 0;
}

