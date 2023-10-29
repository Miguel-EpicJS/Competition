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
	set<int> ss;
	multiset<int>ms;
	for (int i = 0; i < n; i++)
	{
	    int x;
	    cin >> x;
	    arr.push_back(x);
	    ss.insert(x);
	    ms.insert(x);
	}
	sort(arr.begin(), arr.end());
	if (n == 2 || ss.size() == 1)
	{
	    cout << "YES\n";
	}
	else if (ss.size() > 2)
	{
	    cout << "NO\n";
	}
	else if (ss.size() == 2)
	{
	    if (arr.size()%2==0)
	    {
		if (ms.count(arr[0]) == ms.count(arr[n-1]))
		{
		    cout << "YES\n";
		}
		else
		{
		    cout << "NO\n";
		}
	    }
	    else
	    {
		if ( ( ms.count(arr[0]) - ms.count(arr[n-1]) ) == 1 ||  ( ms.count(arr[0]) - ms.count(arr[n-1]) ) == -1)
		{
		    cout << "YES\n";
		}
		else
		{
		    cout << "NO\n";
		}
	    }
	}

    }

    return 0;
}

