#include <iostream>

using namespace std;

int graph[1001][1001];

int r, c, ci, cj;

void bfs(int xi, int yj)
{
    for (int i = 0; i < r; i++)
    {
	for (int j = 0; j < c; j++)
	{
	    int x = abs(xi - i);
	    int y = abs(yj - j);

	    graph[i][j] = (x > y ? x : y);
	}
    }
}

int main()
{


    cin >> r >> c >> ci >> cj;

    bfs(ci, cj);

    for (int i = 0; i < r; i++)
    {
	for (int j = 0; j < c; j++)
	{
	    cout << graph[i][j] << " ";
	}
	cout << "\n";
    }

    return 0;
}
