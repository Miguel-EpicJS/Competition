#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;

    cin >> t;

    while (t--)
    {
	
	int n, k;

	cin >> n >> k;

	long long arr[n];

	int i;

	map<long long, long long> val;

	for (i = 0; i < n; i++)
	{
	    cin >> arr[i];
	    val[arr[i]] += arr[i];
	}

	vector<long long> a;

	for (auto j : val)
	{
	    if (j.second < 0)
		j.second = 0;
	    a.push_back(j.second);
	}

	sort(a.begin(), a.end());
	cout << accumulate(a.end() - k, a.end(), 0LL) << "\n";
    }

    return 0;
}

