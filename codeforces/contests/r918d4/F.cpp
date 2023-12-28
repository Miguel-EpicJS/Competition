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
	long long n, a = 0, b = 0, x;

	cin >> n;

	vector<array<long long, 2>> arr;
	vector<long long> ends;


	for (int i = 0; i < n; i++)
	{
	    cin >> a >> b;

	    arr.push_back({a, b});
	    ends.push_back(b);
	}
	long long ans = 0;


	for (auto i : arr)
	{
	    auto it1 = upper_bound(ends.begin(), ends.end(), i[0]);
	    auto it2 = lower_bound(ends.begin(), ends.end(), i[1]);

	    cout << (it2 - it1) << " ";
	    ans += (it2 - it1);
	}

	
	cout << ans << "\n";
    }

    return 0;
}

