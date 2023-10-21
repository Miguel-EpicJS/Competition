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
	int n, x;
	cin >> n >> x;

	string ans = "NO\n";

	while (n--)
	{
	    int y;
	    cin >> y;
	    if (y == x) ans = "YES\n";
	}

	cout << ans;
    }

    return 0;
}

