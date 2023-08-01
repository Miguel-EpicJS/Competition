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
	cin >> n;
	vector<int> arr;
	arr.push_back(0);
	int tot = 0;
	bool ok = false;
	for (int i = 0; i < n; i++)
	{
	    cin >> x;
	    arr.push_back(x);
	    if (arr.back() < arr[i]) ok = true;
	}

	if (ok) cout << tot << "\n";
	else
	{
	    int m = INT_MAX;
	    for (int i = 1; i < n; i++)
	    {
		if ((arr[i+1]-arr[i])/2 + 1 < m) m =(arr[i+1]-arr[i])/2 + 1;
	    }

	    cout << m << "\n";
	}
    }

    return 0;
}

