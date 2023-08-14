#include <bits/stdc++.h>

using namespace std;

#define int long long

typedef pair<int, int> pii;

void dijkstra(const vector<vector<pii>>& graph, int start, vector<int>& distances, vector<int>& parents) {
    int n = graph.size();
    distances.assign(n+10, INT_MAX);
    parents.assign(n+10, -1);
    distances[start] = 0;

    priority_queue<pii, vector<pii>, greater<pii>> pq;

    pq.push({0, start});

    while (!pq.empty()) {
        int currVertex = pq.top().second;
        int currDistance = pq.top().first;
        pq.pop();

        if (currDistance > distances[currVertex])
            continue;

        for (const pii& neighbor : graph[currVertex]) {
            int neighborVertex = neighbor.first;
            int edgeWeight = neighbor.second;

            if (currDistance + edgeWeight < distances[neighborVertex]) {
                distances[neighborVertex] = currDistance + edgeWeight;
                parents[neighborVertex] = currVertex;
                pq.push({distances[neighborVertex], neighborVertex});
            }
        }
    }
}


int32_t main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<pii>> graph(n+10);

    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	if (i == 0 && x != 1) return 0;
    }

    for (int i = 0; i < m; ++i) {
        int u, v, w, k;
        cin >> u >> v >> w >> k;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    vector<int> distances, parents;
    dijkstra(graph, 1, distances, parents);

    if (distances[n] == INT_MAX) {
        cout << "-1\n";
    } else {
        cout << distances[n] << "\n";
    }

    return 0;
}

