#include <bits/stdc++.h>

using namespace std;


const int MAXN = 1e5 + 5; // maximum number of nodes
vector<int> adj[MAXN];   // adjacency list
int subtree_size[MAXN];  // size of subtree rooted at each node

// computes the size of subtree rooted at each node using DFS
void dfs_subtree_size(int u, int p) {
    subtree_size[u] = 1;
    for (int v : adj[u]) {
        if (v != p) {
            dfs_subtree_size(v, u);
            subtree_size[u] += subtree_size[v];
        }
    }
}

// finds the node that minimizes the difference between the sizes of its subtree and the other subtree
int find_min_diff(int u, int p, int total_size, int& min_diff) {
    int size = subtree_size[u];
    int other_size = total_size - size;
    int diff = abs(size - other_size);
    if (diff < min_diff) {
        min_diff = diff;
    }
    for (int v : adj[u]) {
        if (v != p) {
            find_min_diff(v, u, total_size, min_diff);
        }
    }
    return min_diff;
}

int main() {
    int n;
    cin >> n;

    // read the tree
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs_subtree_size(1, -1); // compute the size of subtree rooted at each node

    int total_size = subtree_size[1];
    int min_diff = n;
    find_min_diff(1, -1, total_size, min_diff); // find the minimum difference

    cout << min_diff << endl;

    return 0;
}
