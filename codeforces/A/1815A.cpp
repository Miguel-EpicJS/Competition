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
	int n;

	cin >> n;

	vector<int> arr;

	for (int i = 0; i < n; i++)
	{
	    int x;
	    cin >> x;
	    arr.push_back(x);
	}

	if (arr.size() % 2 == 1)
	{
	    cout << "YES\n";
	}
	else
	{
	    long long int s = 0;
	    bool ok = true;
	    for (int i = 0; i < n; i++)
	    {
		if (ok)
		    s-=arr[i];
		else
		    s+=arr[i];

		ok = !ok;
	    }
	    if (s >= 0)
	    {
		cout << "YES\n";
	    }
	    else 
	    {
		cout << "NO\n";
	    }
	}

    }

    return 0;
}

