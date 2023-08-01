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
	int n, m, k, x, y, z;

	cin >> n;

	vector<int> arr;

	int d = 0;

	for (int i = 1; i <= n; i++)
	{
	    cin >> x;
	    arr.push_back(x);
	    if (x == i) d++;
	}

	if (d % 2 == 0) cout << d/2 << "\n";
	else cout << d/2 + 1 << "\n";
    }

    return 0;
}

