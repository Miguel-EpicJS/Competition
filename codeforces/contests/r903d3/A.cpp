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
	int k, w, a, b, c, n, m;
	string x, y, z;
	cin >> n >> m;
	
	cin >> x >> y;
	a = 0;
	while(x.find(y) == string::npos && x.size() <= 200)
	{
	    z = x;
	    x += z;
	    a++;
	}

	if (x.find(y) == string::npos)cout << "-1\n";
	else cout << a << "\n";
    }

    return 0;
}

