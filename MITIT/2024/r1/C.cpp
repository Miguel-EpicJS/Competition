#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;



    cin >> t;

    while(t--)
    {
	long long ans = 1;

	long long n, m;

	cin >> n >> m;

	char mat[n+10][m+10];

	for (int i = 1; i <= n; i++)
	{
	    for (int j = 1; j <= m; j++)
	    {
		cin >> mat[i][j];
	    }
	}

	for (int i = 1; i <= n; i++)
	{
	    for (int j = 1; j <= m; j++)
	    {
		long long x = 0;
		if (mat[i][j] == 'o')
		{
		    if ()
		}
	    }
	}

    }

    return 0;
}

