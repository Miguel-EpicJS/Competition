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
	int n, a, q, p;

	cin >> n >> a >> q;
	string s;
	cin >> s;
	if (a == n)
	{
	    cout << "YES\n";
	}
	string ans = "MAYBE";
	for (auto i : s)
	{
	    if (i == '-')a--;
	    else a++, p++;
	    if (a == n) ans = "YES\n";
	}

	if (p+a < n) cout << "NO\n";
	else cout << ans << "\n";

    }

    return 0;
}

