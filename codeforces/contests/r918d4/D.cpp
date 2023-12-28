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
	long long a, b, c, n;

	cin >> n;

	string s;

	cin >> s;

	reverse(s.begin(), s.end());

	string ans = "";

	int i = 0;

	while(i < s.size())
	{
	    if (s[i] == 'a' || s[i] == 'e')
	    {
		ans += s[i];
		ans += s[i+1];
		ans += '.';
		i+=2;
	    }
	    else
	    {
		ans += s[i];
		ans += s[i+1];
		ans += s[i+2];
		ans += '.';
		i+=3;
	    }
	}


	reverse(ans.begin(), ans.end());

	for ( i = 1; i < ans.size(); i++) cout << ans[i];

	cout << "\n";

    }

    return 0;
}

