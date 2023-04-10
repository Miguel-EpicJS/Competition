#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;
    vector<double> prices;

    while (n--)
    {
	double x, y;
	cin >> x >> y;

	prices.push_back(1000 / y * x);
    }

    sort(prices.begin(), prices.end());
    
    cout << fixed << showpoint;
    cout << setprecision(2) << prices[0] << "\n";

    return 0;
}

