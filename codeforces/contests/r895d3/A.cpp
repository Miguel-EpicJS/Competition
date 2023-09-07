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

	vector<int> arr;
	cin >> a >> b >> c;
	if (a < b) swap(a, b);
	if (a == b)
	{
	    cout << "0\n";
	    continue;
	}

	int count = 0;
	while(a-b != 0)
	{
	    count ++;
	
	    if ((a-b)/2 < c) {break;};

	    a -= c;
	    b += c;

	}

	cout << count << "\n";
    }

    return 0;
}

