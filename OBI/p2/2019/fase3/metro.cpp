#include <bits/stdc++.h>

using namespace std;

vector<int> b[100010], r[100010];

void dfsb()

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n-1; i++)
    {
	int x, y;
	cin >> x >> y;
	    
	b[x].push_back(y);
	b[y].push_back(x);

    }

    for (int i = 0; i < m-1; i++)
    {
	int x, y;
	cin >> x >> y;

	r[x].push_back(y);
	r[y].push_back(x);
    }

    
    
    return 0;
}

