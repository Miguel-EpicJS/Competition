#include <bits/stdc++.h>

using namespace std;

vector<int> graph[200001];

int dist[200001];
int last = 0;
int m = 0;
void dfs(int src, int parent)
{
    dist[src] = dist[parent]+1;
    if (dist[src] > m)
    {
	m = dist[src];
	last = src;
    }
    for (auto i : graph[src])
    {
	if (i != parent)
	{
	    dfs(i, src);
	}
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    for (int i = 0; i < n-1; i++)
    {
	int a, b;

	cin >> a >> b;

	graph[a].push_back(b);
	graph[b].push_back(a);
    }
    dist[0] = -1;

    dfs(1, 0);
    dfs(last, 0);

    cout << m << "\n";
    

    return 0;
}

