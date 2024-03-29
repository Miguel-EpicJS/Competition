#include <bits/stdc++.h>

using namespace std;

pair<int, int> ans[50];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while(t--)
    {
	int n, m, x;

	cin >> n;

	vector<int> arr;

	m = -30;

	bool ok = true;
	int l = 0;

	for (int i = 0; i < n; i++)
	{
	    cin >> x;
	    arr.push_back(x);
	    if (x > m)
	    {
		m = x;
		l = i;
	    }
	}

	for (int i = 1; i < n; i++)
	{
	    if (arr[i] < arr[i-1]) ok = false;
	}

	if (ok) cout << "0\n";
	else
	{
	    int i = l;
	    int op = 0;

	    while (op < 13)
	    {
		ans[op] = {i+1, i+1};
		arr[i] = arr[i]*2;
		op++;
	    }
	    ans[op] = {1, i+1};
	    op++;
	    arr[0] += arr[i];
	    for (int j = 1; j < n; j++)
	    {
		while(arr[j] < arr[j-1])
		{
		    ans[op] = {j+1, j};
		    arr[j] += arr[j-1];
		    op++;
		}
	    }

	    cout << op << "\n";
	    for (int k = 0; k < op; k++)
	    {
		cout << ans[k].first << " " << ans[k].second << "\n";
	    }
	}

    }

    return 0;
}

