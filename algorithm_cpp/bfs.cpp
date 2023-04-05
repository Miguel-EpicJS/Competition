#include <bits/stdc++.h>

using namespace std;

vector<int> graph[1000];

void bfs(int src)
{
    vector<bool> vis(1000, false);

    list<int> queue;

    vis[src] = true;
    queue.push_back(src);

    while(!queue.empty())
    {
	int c = queue.front();
	cout << c << " ";
	queue.pop_front();

	for (auto i : graph[c])
	{
	    if (!vis[i])
	    {
		vis[i] = true;
		queue.push_back(i);
	    }
	}
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, start;

    cin >> n >> m >> start;

    for (int i = 0; i < m; i++)
    {
	int x, y;
	cin >> x >> y;
	graph[x].push_back(y);
	graph[y].push_back(x);
    }

    bfs(start);

    cout << "\n";

    return 0;
}

