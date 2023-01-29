#include <iostream>
#include <queue>

using namespace std;


using namespace std;

#define SIZE 10

int graph[SIZE][SIZE];

void startGraph()
{
    for (int i = 0; i < SIZE; i++)
    {
	for (int j = 0; j < SIZE; j++)
	{
	    graph[i][j] = 0;
	}
    }
}

void addEdge(int i, int j, int w, bool bi)
{
    if (i >= SIZE || j >= SIZE)
    {
	cout << "UPDATE SIZE\n";
	return;
    }

    graph[i][j] = w;
    if (bi)
	graph[j][i] = w; 

}

void printGraph()
{
    cout << "   ";
    for (int i = 0; i < SIZE; i++)
	cout << i << " ";

    cout << "\n";

    for (int i = 0; i <= SIZE; i++)
	cout << "__";

    cout << "\n";


    for (int i = 0; i < SIZE; i++)
    {
	cout << i << "| ";
	for (int j = 0; j < SIZE; j++)
	{
	    cout << graph[i][j] << " ";
	}
	cout << "\n";
    }
}

bool visitedBFS[SIZE];

void dijkstra(int v)
{
    priority_queue<int> Q; 
    Q.push(v);

    visitedBFS[v] = true;
    
    while(!Q.empty())
    {
	v = -1 * Q.top();
	Q.pop();

	cout << v << ", ";
	
	for (int i = 0; i < SIZE; i++)
	{
	    if (graph[v][i] != 0 && !visitedBFS[i])
	    {
		visitedBFS[i] = true;
		Q.push(i * -1);
	    }
	}
    }
}


int main()
{
    
    startGraph();

    addEdge(1, 2, 1*2, true);
    addEdge(1, 4, 2*2, true);
    addEdge(1, 7, 3*2, true);
    addEdge(2, 3, 4*2, true);
    addEdge(4, 5, 5*2, true);
    addEdge(4, 6, 6*2, true);
    addEdge(7, 8, 7*2, true);
    addEdge(0, 1, 8*2, true);
    
    printGraph();

    cout << "\n\n";
    
    dijkstra(0);

    return 0;

}

