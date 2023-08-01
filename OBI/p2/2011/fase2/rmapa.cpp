#include <bits/stdc++.h>

using namespace std;

vector<array<int, 3>> graph;

int parent[100000];

int find(int i)
{
    if (i == parent[i]) return i;
    else return find(parent[i]);
}

void uni(int u, int v)
{
    parent[u] = parent[v];
}
int ans;
void kruskal()
{
    int i, uRep, vRep;
    sort(graph.begin(), graph.end());
    for (int i = 0; i < graph.size(); i++)
    {
	uRep = find(graph[i][1]);
	vRep = find(graph[i][2]);
	if (uRep != vRep) 
	{
	   ans += graph[i][0];
	   uni(uRep, vRep);
	}
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    ans = 0; 
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
	int x, y, z;
	cin >> x >> y >> z;
	graph.push_back({z, x, y});
    }
    for (int i = 1; i <= n; i++) parent[i] = i;

    kruskal();

    cout << ans << "\n";
    

    return 0;
}

