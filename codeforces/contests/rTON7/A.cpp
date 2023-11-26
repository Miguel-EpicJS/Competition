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
	long long x, y, z;
	cin >> x;
	vector<long long> arr;
	for (int i = 0; i < x; i++)
	{
	    cin >> y;
	    arr.push_back(y);
	}
	if (arr[0] != 1) cout << "NO\n";
	else cout << "YES\n";
    }

    return 0;
}

