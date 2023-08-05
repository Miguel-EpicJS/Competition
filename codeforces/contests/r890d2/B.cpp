#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;

    cin >> t;

    while(t--)
    {
	long long a, b = 0, c, x, y, z, n, m, k;

	cin >> n;

	vector<int> arr1, arr2;
	for (int i = 0; i < n; i++)
	{
	    cin >> x;
	    arr1.push_back(x);
	    b+= x;
	}
	if (n == 1)
	{
	    cout << "NO\n";
	}
	else
	{
	    a = 0;
	    for (int i = 0; i < n-1; i++)
	    {
		if (arr1[i] == 1) a+=2;
		else a+= 1;
	    }
	    if (a >= b || (abs(a-b) == 1 && arr1[n-1] == 1))
	    {
		cout << "NO\n";
	    }
	    else
	    {
		cout << "YES\n";
	    }
	}


    }


    return 0;
}

