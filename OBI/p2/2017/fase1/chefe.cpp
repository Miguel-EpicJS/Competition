#include <bits/stdc++.h>

using namespace std;

vector<int> graph[510];
vector<bool> gerentes;
vector<int> ages(510);

int n, m, l;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n >> m >> l;


    gerentes.assign(n+5, true);

    for (int i = 0; i < n; i++)
    {
	cin >> ages[i];
    }

    for (int i = 0; i < m; i++)
    {
	int x, y;
	cin >> x >> y;
	graph[x].push_back(y);
	gerentes[y] = false;
    }
    
    for (int i = 1; i <= n; i++)
    {
	for (int j = 1; j <= n; j++)
	{
	    cout << graph[i][j] << " ";
	}
	cout << "\n\n";
    }

    for (int i = 0; i < l; i++)
    {
	char c;
	cin >> c;
	if (c == 'T')
	{
	    int x, y;
	    cin >> x >> y;

	    int c = gerentes[x];
	    gerentes[x] = gerentes[y];
	    gerentes[y] = c;

	    c = ages[x];
	    ages[x] = ages[y];
	    ages[y] = c;
	}
	else
	{
	    int x;
	    cin >> x;
	    if (gerentes[x])
	    {
		cout << "*\n";
	    }
	    else
	    {

	    }
	}
    }

    for (int i = 1; i <= n; i++)
    {
	for (int j = 1; j <= n; j++)
	{
	    cout << graph[i][j] << " ";
	}
	cout << "\n";
    }

    return 0;
}

