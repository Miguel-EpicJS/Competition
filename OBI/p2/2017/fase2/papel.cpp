#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
    }

    set<int> pos(arr.begin(), arr.end());

    int tot = 1;

    for (auto i : pos)
    {
	int t = 1;
	for (int j = 0; j < n; j++)
	{
	    int x = arr[j] - i;

	    if (x > 0)
	    {
		t++;
		while ( j < n && arr[j] - i > 0)
		{
		    j++;
		}
	    }
	}
	tot = max(t, tot);
    }

    cout << tot << "\n";

    return 0;
}

