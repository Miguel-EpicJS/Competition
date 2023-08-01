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
	int n, k, x;
	cin >> n >> k;

	vector<array<double, 3>> ans;
	for (int i = 1; i <= n; i++)
	{
	    cin >> x;
	    ans.push_back({ceil(1.0*x/k), -1.0*x/k, (double)i});
	}

	sort(ans.begin(), ans.end());

	for (auto i : ans)
	{
	    cout << i[2] << " ";
	}

	cout << "\n";
    }

    return 0;
}
 
