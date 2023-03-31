#include <bits/stdc++.h>

using namespace std;

int bfs_distance(vector<int>(&graph)[100010], int n) {
    queue<int> q;
    vector<int> dist(n+1, -1);
    dist[1] = 0;
    q.push(1);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : graph[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    return dist[n];
}

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;

	vector<int> g[100010];

	for (int i = 0; i < m; i++)
	{
	    int x, y;
	    cin >> x >> y;
		
	    g[x].push_back(y);
	    g[y].push_back(x);
	}

	cout << bfs_distance(g, n) << "\n";
    }
    return 0;
}
