#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<int> arr(n), lis;

    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
	auto it = lower_bound(lis.begin(), lis.end(), arr[i]);
	if (it == lis.end())
	{
	    lis.push_back(arr[i]);
	}
	else
	{
	    *lower_bound(lis.begin(), lis.end(), arr[i]) = arr[i];
	}
    }

    cout << lis.size() << "\n";

    return 0;
}

