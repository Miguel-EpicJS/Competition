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
	int a, b, c, x, y, z, k, w, n, m;

	vector<int> arr;

	cin >> a >> b >> c;

	if (b > a)
	{
	    cout << "Second\n";
	}
	else if (b < a)
	{
	    cout << "First\n";
	}
	else
	{
	    if (c % 2 == 0)
	    {
		cout << "Second\n"; 
	    }
	    else
	    {
		cout << "First\n";
	    }
	}

    }

    return 0;
}

