#include <iostream>
#include <queue>

using namespace std;

#define SIZE 10

struct node
{
    node link;
    int data;
}

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

void addEdge(int i, int j, bool bi)
{
    if (i >= SIZE || j >= SIZE)
    {
	cout << "UPDATE SIZE\n";
	return;
    }

    graph[i][j] = 1;
    if (bi)
	graph[j][i] = 1; 

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

// DFS & BFS based on wikipedia pseudocode
//

bool visitedDFS[SIZE];

void DFS(int v)
{
    visitedDFS[v] = true;
    cout << v << ", ";
    for (int i = 0; i < SIZE; i++)
    {
	if (graph[v][i] == 1 && !visitedDFS[i])
	{
	    DFS(i);
	}
    }
}

bool visitedBFS[SIZE];

void BFS(int v)
{
    queue<int> Q; 
    Q.push(v);

    visitedBFS[v] = true;
    
    while(!Q.empty())
    {
	v = Q.front();
	Q.pop();

	cout << v << ", ";
	
	for (int i = 0; i < SIZE; i++)
	{
	    if (graph[v][i] != 0 && !visitedBFS[i])
	    {
		visitedBFS[i] = true;
		Q.push(i);
	    }
	}
    }
}


int main()
{
    startGraph();

    addEdge(1, 2, true);
    addEdge(1, 4, true);
    addEdge(1, 7, true);
    addEdge(2, 3, true);
    addEdge(4, 5, true);
    addEdge(4, 6, true);
    addEdge(7, 8, true);
    addEdge(0, 1, true);
    
    printGraph();

    cout << "\n\n";

    DFS(0);

    cout << "\n\n";
    
    BFS(0);

    return 0;
}
