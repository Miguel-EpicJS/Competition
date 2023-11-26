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
	int n, x;
	vector<int> arr;

	map<int, int> freq, mx;

	cin >> n;
	
	int hig = 0;

	for (int i = 0; i < n; i++)
	{
	    cin >> x;
	    arr.push_back(x);
	    freq[x]++;
	    mx[x] = i;
	}

	int a = 0, b= 0;

	for (auto i : freq)
	{
	    if (i.second >= 2)
	    {
		b = a;
		a = i.first;
		hig++;
	    }
	}

	if (hig < 2)
	{
	    cout << "-1\n";
	}
	else
	{
	    for (int i = 0; i < n; i++)
	    {
		if (arr[i] != a && arr[i] != b)
		{
		    cout << "1 ";
		}
		else if (i == mx[arr[i]] && arr[i] == a) cout << "2 ";
		else if (i == mx[arr[i]] && arr[i] == b) cout << "3 ";
		else cout << "1 ";
	    }
	    cout << "\n";
	}
	

    }

    return 0;
}

