#include <bits/stdc++.h>

using namespace std;

int n, m;

vector<int> t[200005];

int a[200005];

int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);*/

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
	cin >> a[i];
    }

    for (int i = 1; i <= n; i++)
    {
	int x;
	cin >> x;

	t[x].push_back(i+1);
    }

    

    return 0;
}

