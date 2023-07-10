#include <bits/stdc++.h>

using namespace std;

vector<int> graph[100010];
bool vis[100010];
int parent[100010];

int n, m;

bool bfs()
{
    queue<int> q;
    q.push(1);
    vis[1] = true;
    parent[1] = 0;

    while(!q.empty())
    {
	int head = q.front();
	q.pop();

	if (head == n) return true;
	for (auto i : graph[head])
	{
	    if (!vis[i])
	    {
		q.push(i);
		vis[i] = true;
		parent[i] = head;
	    }
	}
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
	int x, y;
	cin >> x >> y;

	graph[x].push_back(y);
	graph[y].push_back(x);
    }


    if (bfs())
    {
	int head = n;
	int tot = 0;
	stack<int> ans;
	while(head != 0)
	{
	    tot++;
	    ans.push(head);
	    head = parent[head];
	}
	cout << tot << "\n";
	while (!ans.empty())
	{
	    cout << ans.top() << " ";
	    ans.pop();
	}
    }
    else
    {
	cout << "IMPOSSIBLE\n";
    }

    return 0;
}

