#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t, n, x;

    cin >> t;

    while(t--)
    {
	cin >> n >> x;

	vector<int> q(n),w(n),e(n);

	for (int i = 0; i < n; i++)
	    cin >> q[i];
	for (int i = 0; i < n; i++)
	    cin >> w[i];
	for (int i = 0; i < n; i++)
	    cin >> e[i];

	if (x == 0)
	{
	    cout << "Yes\n";
	    continue;
	}

	if (q[0] > x && w[0] > x && e[0] > x)
	{
	    cout << "No\n";
	    continue;
	}

	unsigned int u = 0;
	unsigned int a = 0, b = 0, c = 0;

	bool ok = true;
	bool ak = true, bk = true, ck = true;

	for (int i = 0; i < n; i++)
	{
	    
	    a = u | q[i];
	    b = u | w[i];
	    c = u | e[i];


	    for (int i = 31; i >= 0; i-- )
	    {
		int bx = ( (x >> i) & 1); 
		if ( bx == 0 && ( (a >> i) & 1) == 1)
		    ak = false;

		if ( bx == 0 && ( (b >> i) & 1) == 1)
		    bk = false;
	    
		if ( bx == 0 && ( (c >> i) & 1) == 1)
		    ck = false;
	    }

	    if (ak)
		u = u | a;
	    if (bk)
		u = u | b;
	    if (ck)
		u = u | c;
	    
	    if (u == x)
	    {
		cout << "Yes\n";
		ok = false;
		break;
	    }
	}


	if (ok)
	{
	    cout << "No\n";
	}
	
    }

    return 0;
}
