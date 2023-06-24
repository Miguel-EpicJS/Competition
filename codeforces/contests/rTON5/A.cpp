#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n, m;

    cin >> t;

    while(t--)
    {
	cin >> n >> m;

	long long s1 = 0;
	long long s2 = 0;
	long long x;
	while (n--)
	{
	    cin >> x;
	    s1 += x;
	}
	while(m--)
	{
	    cin >> x;
	    s2 += x;
	}

	if (s1 > s2)
	{
	    cout << "Tsondu\n";
	}
	else if (s2 > s1)
	{
	    cout << "Tenzing\n";
	}
	else 
	{
	    cout << "Draw\n";
	}
    }

    return 0;
}

