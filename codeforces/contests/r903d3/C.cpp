#include <bits/stdc++.h>

using namespace std;

char mat[1010][1010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while(t--)
    {
	char x, y, z, k, w, a, b, c, d, e, m;
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
	    for (int j = 1; j <= n; j++)
	    {
		cin >> mat[i][j];
	    }
	}
	long long tot = 0;
	for (int i = 1; i <= n; i++)
	{
	    for (int j = 1; j <= n; j++)
	    {
		a = mat[i][j];
		b = mat[n+1-j][i];
		c = mat[n+1-i][n+1-j];
		d = mat[j][n+1-i];
		e = max({a, b, c, d});
		if (a == e && b == e && c == e && d == e) continue;
		tot += ((e-'a')-(a-'a'));
		tot += ((e-'a')-(b-'a'));
		tot += ((e-'a')-(c-'a'));
		tot += ((e-'a')-(d-'a'));
		
		mat[i][j] = e;
		mat[n+1-j][i] = e;
		mat[n+1-i][n+1-j] = e;
		mat[j][n+1-i] = e;
	    }
	}

	cout << tot << "\n";
    }

    return 0;
}

