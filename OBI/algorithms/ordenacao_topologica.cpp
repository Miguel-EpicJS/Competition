#include <iostream>
#include <vector>

using namespace std;

int main()
{
    bool graph[11][11];

    graph[7][11] = 1;
    graph[7][8]  = 1;
    graph[5][11] = 1;
    graph[3][8]  = 1;
    graph[3][10] = 1;
    graph[11][2] = 1;
    graph[11][9] = 1;
    graph[11][10]= 1;
    graph[8][9] = 1;

    vector<int> L, S;

    S.push_back(7);
    S.push_back(5);
    S.push_back(3);

    while (!S.empty())
    {
	int n = S.back();
	S.pop_back();
	L.push_back(n);
    


    }

}

