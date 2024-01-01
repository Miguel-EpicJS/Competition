#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);

    // TLE SOL
    /*
    string s, ss;
    cin >> s >> ss;

    auto pos = s.find(ss);

    while(pos < s.size() && pos >= 0)
    {
	s.erase(pos, ss.size());
	pos = s.find(ss);
    }
    cout << s << "\n";
    */
    string s;
    string t;
    cin >> s >> t;

    string censored;
    // Add each character to the censored string
    for (int i = 0; i < s.size(); i++) {
    	censored += s[i];
	// If the end of the string is t, we remove t from the end
	if (censored.size() > t.size() &&
	    censored.substr(censored.size() - t.size()) == t) {
		censored.resize(censored.size() - t.size());
	}
    }
    cout << censored << endl;


    return 0;
}

