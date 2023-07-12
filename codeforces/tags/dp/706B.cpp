#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    
    cin >> n;

    vector<int> prices;
    int x;

    for (int i = 0; i < n; i++)
    {
	cin >> x;

	prices.push_back(x);
    }

    sort(prices.begin(), prices.end());

    int q;

    cin >> q;

    auto it = lower_bound(prices.begin(), prices.end(), 1);

    for (int i = 0; i < q; i++)
    {
	cin >> x;

	if (x < prices[0])
	{
	    cout << "0\n";
	    continue;
	}

	it = upper_bound(prices.begin(), prices.end(), x);


	cout << distance(prices.begin(), it) << "\n";

    }

    return 0;
}

