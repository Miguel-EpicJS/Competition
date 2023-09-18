#include <bits/stdc++.h>

using namespace std;

bool vis[1000010];
int mat[1001][1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;

    cin >> n;

    bool ok = true;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
	sum = 0;
	for (int j = 0; j < n; j++)
	{
	    cin >> x;
	    mat[i][j] = x;
	    if (vis[x] == true)
	    {
		ok = false;
	    }
	    vis[x] = true;
	    sum += x;
	}
    }

    for (int i = 1; i < n; i++)
    {
	ok = ok && vis[i+1];
    }

    if (ok)
    {
	cout << sum << "\n";
    }
    else
    {
	cout << "0\n";
    }

    return 0;
}

