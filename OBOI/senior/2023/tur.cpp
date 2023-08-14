#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

struct Edge {
    int to;
    int weight;
    int keyType;

    Edge(int _to, int _weight, int _keyType) : to(_to), weight(_weight), keyType(_keyType) {}
};

vector<vector<Edge>> graph;
vector<vector<int>> keys;
vector<int> dist;

void Dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dist[start] = 0;
    pq.push(make_pair(0, start));

    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if (d > dist[u]) continue;

        for (const Edge& edge : graph[u]) {
            if (keys[u][edge.keyType] && dist[u] + edge.weight < dist[edge.to]) {
                dist[edge.to] = dist[u] + edge.weight;
                pq.push(make_pair(dist[edge.to], edge.to));
            }
        }
    }
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    graph.resize(N + 1);
    keys.assign(N + 1, vector<int>(K + 1, 0));
    dist.assign(N + 1, INF);

    for (int i = 1; i <= N; ++i) {
        int keyType;
        cin >> keyType;
        keys[i][keyType] = 1;
    }

    for (int i = 0; i < M; ++i) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        graph[a].emplace_back(b, c, d);
        graph[b].emplace_back(a, c, d);
    }

    Dijkstra(1);

    if (dist[N] == INF) {
        cout << "-1\n";
    } else {
        cout << dist[N] << "\n";
    }

    return 0;
}

