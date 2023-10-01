#include <bits/stdc++.h>

using namespace std;

int bfs(int start, int end)
{
    queue<int> q;
    bool vis[50010];
    q.push(start);

    int dist[50010];
    
    for (int i = 0; i < 50010; i++) dist[i] = 1e9;

    dist[start] = 0;

    while(!q.empty())
    {
	int node = q.front();
	q.pop();

	if (node == end) return dist[node];
	if (vis[node]) continue;
	vis[node] = true;

	if (node-1 > 1)
	{
	    dist[node-1] = min(dist[node-1], dist[node]+1);
	    q.push(node-1);
	}
	if (node*2 < 50010)
	{
	    dist[node*2] = min(dist[node*2], dist[node]+1);
	    q.push(node*2);
	}
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // TWO BUTTONS
    // Description: Apply bfs on arbitrary graph
    
    long long n, m;

    cin >> n >> m;

    if (m == n)
    {
	cout << "0\n";
    }
    else if (n > m)
    {
	cout << n-m << "\n";
    }
    else
    {
	cout << bfs(n, m) << "\n";
    }

    return 0;
}

