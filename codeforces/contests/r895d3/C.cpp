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
	int a, b, c, n, m, x, y, z, k, w;

	cin >> a >> b;
	
	if (b <= 3)
	{
	    cout << "-1\n";
	}
	else if (a == b)
	{
	    k = -1;
	    for (int i = 2; i*i <= a; i++)
	    {
		if (a % i == 0)
		{
		    k = i;
		    break;
		}
	    }

	    if (k == -1)
	    {
		cout << "-1\n";
	    }
	    else
	    {
		cout << a/k << " " << a-(a/k) << "\n";
	    }
	}
	else
	{
	    k = b - b%2;
	    cout << k/2 << " " << k/2 << "\n";
	}

    }

    return 0;
}

