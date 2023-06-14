#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    unordered_map<char, int> vals;

    vals['A'] = 1;
    vals['B'] = 10;
    vals['C'] = 100;
    vals['D'] = 1000;
    vals['E'] = 10000;

    while (t--)
    {
	string s;

	cin >> s;

	int tot = 0;
	char last = 'A';
	for (int i = s.size()-1; i >= 0; i--)
	{
	    if (s[i] < last) tot -= vals[s[i]];
	    else tot += vals[s[i]];
	    
	    last = max(s[i], last);
	}

	cout << tot << "\n";
    }

    return 0;
}

