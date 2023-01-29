#include <iostream>
#include <vector>

using namespace std;

vector<int> weight(1e5+1);
vector<int> subSum(1e5+1);
vector<int> nodeLevel(1e5+1);

vector<vector<int>> graph(1e5+1);

int totSum = 0;

long long sum(int source, int level)
{
    int size = graph[source].size();

    nodeLevel[source] = level;

    if (size == 0)
    {
	subSum[source] = weight[source];
	return weight[source];
    }
    int data = weight[source];

    int sumLeft = 0;
    int sumRight = 0;

    if (size == 2)
    {
	sumLeft = sum(graph[source][0], level+1);
	sumRight = sum(graph[source][1], level+1);
    }
    else
    {
	sumLeft = sum(graph[source][0], level+1);
    }

    subSum[source] = data + sumLeft + sumRight;

    totSum += subSum[source];

    return subSum[source];

}

int main() {
    
    int n, x;

    cin >> n >> x;
    

    for (int i = 1; i <= n; i++)
    {
	cin >> weight[i];
    }

    for (int i = 0; i < n-1; i++)
    {
	int x, y;
	cin >> x >> y;
	
	if (x > y)
	{
	    graph[y].push_back(x);
	}
	else 
	{
	    graph[x].push_back(y);
	}

    }


    sum(1, 1);
    //cout << sum(1, 1);
    //cout << "\n\n";

    vector<int> oneNode;
	

    for (int i = 1; i <= n; i++)
    {
	if (graph[i].size() == 1)
	{
	    oneNode.push_back(nodeLevel[i]);
	}
    }

    //cout << totSum + ((oneNode[0] + 1) * x);

    cout << totSum << "\n";
    cout << oneNode[2];
	
    return 0;
}
