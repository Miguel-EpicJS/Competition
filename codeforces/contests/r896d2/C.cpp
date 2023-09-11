#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;
    
    while(t--)
    {
	int a, b, c, n, m, k, x, y, z, w;

	cin >> n >> m;

	if (m == 1)
	{
	    cout << "0\n";
	    for (int i = 0; i < n; i++)
	    {
		cout << "0\n";
	    }
	    return 0;
	}

	if (n >= m-1)
	{
	    cout << m << "\n";
	    for (int i = m-1; i > 0; i--)
	    {
		for (int j = 0; j < m; j++)
		{
		    cout << (j+i) % m << " ";
		}
		cout << "\n";
	    }

	    for (int i = m-1; i < n; i++)
	    {
		for (int j = 0; j < m; j++)
		{
		    cout << (j+m-1) % m << " ";
		}
		cout << "\n";
	    }
	}
	else
	{

	    cout << n+1 << "\n";
	    for (int i = n; i > 0; i--)
	    {
		for (int j = 0; j < m; j++)
		{
		    cout << (j+i) % m << " ";
		}
		cout << "\n";
	    }
	}


    }

    return 0;
}

