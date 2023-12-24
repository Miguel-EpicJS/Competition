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
	long long x, y, z, a, b, c, n, m, k;

	cin >> n;

	vector<long long> arr, zeroP;

	y = 0;
	a = 0;

	for(int i = 0; i < n; i++)
	{
	    cin >> x;
	    if (x < 0) y++; 
	    if (x == 0) a++, zeroP.push_back(i);
	    arr.push_back(x);
	}

	if (y % 2 == 1 || a > 0)
	{
	    cout << "0\n";
	}
	else if (a == 0 && y % 2 == 0)
	{
	    cout << "1\n1 0\n";
	}
	
    }
    

    return 0;
}

