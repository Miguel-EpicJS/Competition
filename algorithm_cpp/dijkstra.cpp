#include <bits/stdc++.h>

using namespace std;

const int INF = 1000000000;
vector<pair<int, int>> adj[20000];

void dijkstra(int s, vector<int> & d, vector<int> & p, int n) {
    d.assign(n, INF);
    p.assign(n, -1);
    vector<bool> u(n, false);

    d[s] = 0;
    for (int i = 0; i < n; i++) {
        int v = -1;
        for (int j = 0; j < n; j++) {
            if (!u[j] && (v == -1 || d[j] < d[v]))
                v = j;
        }

        if (d[v] == INF)
            break;

        u[v] = true;
        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;

            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
	int x, y, z;
	cin >> x >> y >> z;

	adj[x].emplace_back(y, z);
	adj[y].emplace_back(x, z);

    }

    vector<int> dis, pred;

    dijkstra(0, dis, pred, n+2);

    for (auto i : dis)
    {
	cout << i << " ";
    }

    return 0;
}

