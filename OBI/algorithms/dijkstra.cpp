#include <iostream>
#include <vector>
#include <queue>
#include <iterator>
#include <utility>
#include <list>

using namespace std;
#define INF 0x3f3f3f3f

int V = 9;

list<pair<int,int>>* graph;


void shortestPath(int src)
{
    priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;
    vector<int> dist(V, INF);
    dist[src] = 0;

    while(!pq.empty()) {
	int u = pq.top().second;
	pq.pop();
	list<pair<int, int>>::iterator i;

	for (i = graph[u].begin(); i != graph[u].end(); ++i)
	{
	    int v = (*i).first;
	    int weight = (*i).second;
	    if (dist[v] > dist[u] + weight) {
		dist[v] = dist[u] + weight;
		pq.push(make_pair(dist[v], v));
	    }
	}
    }
    printf("Vertex Distance from Source\n");
    for (int i = 0; i < V; ++i)
        printf("%d \t\t %d\n", i, dist[i]);
}

int main()
{
    graph = new list<pair<int, int>>[V];


    graph[0].push_back(make_pair(1, 4));
    graph[0].push_back(make_pair(7, 8));
    graph[1].push_back(make_pair(2, 8));
    graph[1].push_back(make_pair(7, 11));
    graph[2].push_back(make_pair(3, 7));
    graph[2].push_back(make_pair(8, 2));
    graph[2].push_back(make_pair(5, 4));
    graph[3].push_back(make_pair(4, 9));
    graph[3].push_back(make_pair(5, 14));
    graph[4].push_back(make_pair(5, 10));
    graph[5].push_back(make_pair(6, 2));
    graph[6].push_back(make_pair(7, 1));
    graph[6].push_back(make_pair(8, 6));
    graph[7].push_back(make_pair(8, 7));


    shortestPath(0);

    return 0;
}

