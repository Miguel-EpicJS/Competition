#include <iostream>

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

int main()
{
    startGraph();

    addEdge(0, 1, true);
    addEdge(1, 2, true);
    addEdge(1, 5, true);
    addEdge(2, 5, true);
    addEdge(2, 3, true);
    addEdge(3, 4, true);
    addEdge(4, 5, true);
    addEdge(4, 6, true);
    
    printGraph();

    return 0;
}
