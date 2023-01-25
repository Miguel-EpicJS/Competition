#include <iostream>
#include <vector>

using namespace std;

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

    vector<int> blocked(n);
    int result = 1;

    int maxResult = 0;

    int oneCount = 0;

    for (int i = 0; i < n; i++)
    {
	cin >> blocked[i];
	if (blocked[i] == 1)
	{
	    result = 1;
	    oneCount ++;
	}
	else
	{
	    result += 1;
	}
	if (result > maxResult)
	    maxResult = result;
    }

    if (oneCount == n)
	cout << 2;
    else
	cout << maxResult+1;
}
