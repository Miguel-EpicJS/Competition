#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    int mat[256][256];
    int k = 0;
    for (int i = 0; i < 256; i+= 2)
    {
	for (int j = 0; j < 256; j+= 2)
	{
	    mat[i][j] = k;
	    mat[i][j+1] = k + 1;
	    mat[i+1][j] = k + 2;
	    mat[i+1][j+1] = k + 3;
	    k += 4;
	}
    }

    while(t--)
    {
	long long n, m;

	cin >> n >> m;

	cout << n * m << "\n";
	for (int i = 0; i < n; i++)
	{
	    for (int j = 0; j < m; j++)
	    {
		cout << mat[i][j] << " ";
	    }
	    cout << "\n";
	}
    }

    return 0;
}

