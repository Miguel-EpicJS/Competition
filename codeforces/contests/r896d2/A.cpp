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
	int a, b, c, n, m, k, x, y, w;

	cin >> n;

	vector<int> arr(n);
	int z = 0;
	for (int i = 0; i < n; i++)
	{
	    cin >> arr[i];
	    if (arr[i] == 0) z++;
	}
	if (z==n)
	{
	    cout << "0\n";
	}
	else if (n % 2 == 0)
	{
	    cout << "2\n";
	    cout << "1 " << n << "\n";
	    cout << "1 " << n << "\n";
	}
	else
	{
	    cout << "4\n";
	    cout << "2 " << n << "\n";
	    cout << "2 " << n << "\n";
	    cout << "1 2\n";
	    cout << "1 2\n";

	}

    }

    return 0;
}

