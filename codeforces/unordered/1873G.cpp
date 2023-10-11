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

	int mn = 1e9, cnt = 0, a = 0;

	for(int i = 0; i < s.size(); i++) {
	    if(s[i] == 'A') cnt++, a++;
	    else {
		mn = min(mn, cnt); cnt = 0;
	    }
	}
	mn = min(mn, cnt);
	cout << a - mn << "\n";
    }

    return 0;
}

