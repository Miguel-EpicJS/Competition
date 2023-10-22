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
	string s;
	cin >> s;

	string codes = "01234567890";

	int curr = 1;

	int ans = 0;

	for (auto i : s)
	{
	    int d = 0;
	    if (i == '0') d = 10;
	    else d = i-'0';

	    ans++;
	    ans+= abs(d-curr);
	    curr = d;
	}

	cout << ans << "\n";

    }

    return 0;
}

