#include <iostream>
#include <vector>
#include <map>

using namespace std;

int maxD = -1, maxNode = -1;

map<int, bool> visited;

void dfs(int node, vector<vector<int>> graph, int dis)
{

    visited[node] = true;

    if (dis > maxD)
    {
	maxNode = node;
	maxD = dis;
    }

    for (auto x : graph[node])
    {
	if (visited[x] == 0)
	{
	    dfs(x, graph, dis+1);
	}
    }

}

int main()
{
    int n;

    cin >> n;

    vector<vector<int>> graph(n+1);

    for (int i = 0; i < n-1; i++)
    {
	int x, y;
	cin >> x >> y;

	graph[x].push_back(y);
	graph[y].push_back(x);
    }

    dfs(1, graph, 1);
    maxD = -1;

    for (int i = 1; i <= n; i++)
    {
	visited[i] = false;
    }

    dfs(maxNode, graph, 1);

    cout << maxD << "\n";

    int ciclo = 1;
    int maxVal = maxD;

    for (int i = 1; i <= n; i++)
    {
	if (graph[i].size() - 1 > 0)
	{
	    ciclo *= graph[i].size() - 1;
	}
    }

    cout << ciclo << "\n";

    return 0;
}
