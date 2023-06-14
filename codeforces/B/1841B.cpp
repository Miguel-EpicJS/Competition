#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    int arr[200010];

    while (t--)
    {
	int n;
	cin >> n;

	cin >> arr[0];
	
	string s = "1";

	vector<int> l;
	l.push_back(arr[0]);

	int kind = 1;

	for (int i = 1; i<n;i++)
	{
	    cin >> arr[i];
	    if (kind == 1 && l.back() <= arr[i])
	    {
		s += '1';
		l.push_back(arr[i]);
	    }
	    else if  (kind == 1 && l[0] >= arr[i])
	    {
		s += '1';
		l.push_back(arr[i]);
		kind = 2;
	    }
	    else if (kind == 2 && l.back() <= arr[i] && l.front() >= arr[i])
	    {
		l.push_back(arr[i]);
		s += '1';
	    }
	    else
	    {
		s += '0';
	    }
	}

	cout << s << "\n";
    }

    return 0;
}

