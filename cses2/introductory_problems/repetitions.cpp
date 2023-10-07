#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin >> s;
    s += '.';
    char last = s[0];

    long long ans = 1;
    long long curr = 1;

    for (int i = 1; i < s.size(); i++)
    {
	if (s[i] == last)
	{
	    curr++;
	    ans = max(ans, curr);
	    last=s[i];
	}
	else
	{
	    curr=1;
	    last=s[i];
	}
    }

    cout << ans << "\n";

    return 0;
}

