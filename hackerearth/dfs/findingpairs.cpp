#include <iostream>

#include <vector>

using namespace std;
// Define max N
const int N = 1e5 + 1;
// Create Adjacent Graph
vector < int > graph[N];
// Create array to store depth
int depth[N];
// Create array to store visited
vector < bool > visited(N);
// DFS Function(recursive) to get depth from source(1)
void dfs(int source) {
    // mark as visited
    visited[source] = true;
    // visit all childs
    for (auto child: graph[source]) {
        // ignore if visited
        if (visited[child])
            continue;
        // increase depth(initial depth is 0)
        depth[child] = depth[source] + 1;
        // recursive for child
        dfs(child);
    }
}

// main function :D
int main(void) {
    int n;
    cin >> n;
    // push to graph
    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    // call dfs to root
    dfs(1);
    // initialize sum
    long long sum = n;
    // sum all depths
    for (int i = 1; i <= n; i++) {
        sum += depth[i];
    }
    // print result :D
    cout << sum;

    cout << "\n\n";

    for(int i = 0; i <= n; i++) {
        cout << depth[i] << " ";
    }

}
