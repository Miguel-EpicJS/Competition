#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, m;

    cin >> n >> m;

    vector<long long> a, b, c;

    for (int i = 0; i < n; i++)
    {
	long long x, y;
	cin >> x >> y;
	a.push_back(x);
	b.push_back(y);

	c.push_back(ceil(1.0*(m - x)/y*1.0));
    }

    cout << *max_element(c.begin(), c.end()) + 1 << "\n";

    return 0;
}

