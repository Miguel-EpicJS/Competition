#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, s;

    cin >> n >> m >> s;

    int ans = -1, ss = 0;

    string a;

    for (int i = n; i <= m; i++)
    {
	ss = 0;
	a = to_string(i);
	for (auto j : a)
	{
	    ss += j-'0';
	}
	if (ss == s) ans = max(ans, i);
    }

    cout << ans << "\n";

    return 0;
}

