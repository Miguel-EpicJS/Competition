#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int result = 0;

int dfs(vector<vector<int>> &matrix, vector<int> block, int source)
{
    block[source] = 1;

    result++;

    for ( auto child : matrix[source] ) {

	if (block[child] == 1)
	{
	    continue;
	}

	dfs(matrix, block, child);
    }

    return result;
}

int main()
{
    int n;

    cin >> n;

    vector<vector<int>> matrix(n+1);


    for (int i = 0; i < n - 1; i++)
    {
	int x, y;
	cin >> x >> y;
	matrix[x].push_back(y);
	matrix[y].push_back(x);
    }

    vector<int> blocked(n+1);

    blocked[0] = 1;
    
    vector<int> results;

    for (int i = 0; i < n; i++)
    {
	cin >> blocked[i+1];
    }
    for (int i = 0; i < n; i++)
    {
	result = 0;
	results.push_back(dfs(matrix, blocked, i+1));
    }


    cout << *max_element(results.begin(), results.end()) ;

}
