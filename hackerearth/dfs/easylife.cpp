#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

bool visited[100001];

vector<int> graph[100001];

int edgeSum = 0;
int nodeSum = 0;


void DFS(int size, int source)
{
    stack<int> s;

    if (visited[source])
	return;

    s.push(source);

    while(!s.empty())
    {
	int current = s.top();
	s.pop();

	if (visited[current])
	    continue;

	nodeSum++;
	visited[current] = true;

	for (auto neighbor : graph[current])
	{
	    if (graph[current][neighbor] == 1)
	    {
		edgeSum++;
		s.push(neighbor);
	    }
	}
    }
}

int main()
{
    int n, m;

    cin >> n >> m;


    for (int i = 0; i < m; i++)
    {
	int u, v;
	cin >> u >> v;

	u--;
	v--;

	graph[u].push_back(v);
	graph[v].push_back(u);
    }

    string maxRes = "";
    double maxResCalc = 0;
    double res = 0;

    for (int i = 0; i < n; i++)
    {
	DFS(n, i);
	
	edgeSum /= 2;
	
	res = (edgeSum * 1.0) / (nodeSum * 1.0);

	if (res > 1)
	{
	    maxRes = ">1";
	    break;
	}
	if (res > maxResCalc)
	{
	    maxResCalc = res;
	    maxRes = to_string(edgeSum);
	    maxRes += "/";
	    maxRes += to_string(nodeSum);
	}

	edgeSum = 0;
	nodeSum = 0;
    }

    cout << maxRes;

    return 0;
}
