#include <bits/stdc++.h>

using namespace std;

bool isPowerOfTwo(int n)
{
    return (ceil(log2(n)) == floor(log2(n)));
}

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
	vector<int> arr, diff;

	for (int i = 0; i < n; i++)
	{
	    int x;
	    cin >> x;
	    arr.push_back(x);
	}

	for (int i = 0; i < n-1; i++)
	{
	    diff.push_back(arr[i+1]-arr[i]);
	}

	bool ok = true;
	for (auto i : diff)
	{
	    if (!isPowerOfTwo(i) && i < 0) ok = false;
	}

	if (ok) cout << "YES\n";
	else cout << "NO\n";
    }

    return 0;
}

