#include <iostream>

#include <queue>
#include <vector>
#include <utility>

using namespace std;

const int INF = 0xf3f3f3;
const int null = -127;

const int V = 6;

void dijkstra(int graph[V][V], int source)
{
    int dist[V], prev[V];

    dist[source] = 0;

    priority_queue<pair<int, int>> Q;

    for (int vertex = 0; vertex < V; vertex++)
    {
	if (vertex != source)
	{
	    dist[vertex] = INF;
	    prev[vertex] = null;
	}

	Q.push(make_pair(-1 * dist[vertex], vertex));
    }

    while (!Q.empty())
    {
	pair<int, int> u = Q.top();
	Q.pop();

	for( int neighbor = 0; neighbor < V; neighbor++ )
	{
    
	    if (graph[u.second][neighbor] == -1)
		continue;

	    int alt = dist[u.second] + graph[u.second][neighbor];

	    if (alt < dist[neighbor])
	    {
		dist[neighbor] = alt;
		prev[neighbor] = u.second;
		Q.push(make_pair(alt, neighbor));
	    }
	}

    }

    for(int i = 0; i < V; i++)
    {
	cout << dist[i] << ", ";
    }

}

int main()
{
    
    int graph[V][V] = {
      // 1  2  3  4  5    6
	{0, 2, 4, 8, 16, -1}, // 1
	{2, 0, -1, -1, -1, -1}, // 2
	{4, -1, 0, -1, -1, 32}, // 3
	{8, -1, -1, 0, -1, -1}, // 4
	{16, -1, -1, -1, 0, -1}, // 5
	{-1, -1, 32, -1, -1, 0}, // 6
    };

    dijkstra(graph, 0);

    return 0;                           
}
