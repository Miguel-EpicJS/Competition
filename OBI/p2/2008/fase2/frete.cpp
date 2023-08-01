#include <bits/stdc++.h>

using namespace std;

vector<array<int, 2>> arr[1001];

struct DSU {
    vector<int> e;

    DSU(int n) : e(n, -1) {}
    int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]);}
    bool connected(int a, int b) { return get(a) == get(b); }
    int size(int x) {return -e[get(x)];}
    bool unite(int x, int y)
    {
	x = get(x), y = get(y);
	if (x == y) { return false; }
	if (e[x] > e[y]) { swap(x, y); }
	e[x] += e[y];
	e[y] = x;
	return true;
    }
};

template<class T> T kruskal(int n, vector<pair<T, pair<int, int>>> &edges)
{
    sort(edges.begin(), edges.end());
    T ans = 0;
    DSU D(n+1);
    for (pair<T, pair<int, int>> &e : edges)
    {
	if (D.unite(e.second.first, e.second.second)) { ans += e.first; };
    }
    return (D.size(1) == n ? ans : -1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    vector<pair<int, pair<int, int>>> edges;

    for (int i = 0; i < m; i++)
    {
	int x, y, z;
	cin >> x >> y >> z;
	edges.push_back({z, {x, y}});
    }

    cout << kruskal(n, edges);

    return 0;
}

