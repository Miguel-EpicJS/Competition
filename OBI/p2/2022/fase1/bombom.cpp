#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin >> s;

    char dom = s[1];

    int luana = 0, edu = 0;

    map<char, int> values;
    values['A'] = 10;
    values['J'] = 11;
    values['Q'] = 12;
    values['K'] = 13;

    for (int i = 0; i < 3; i++)
    {
	cin >> s;
	luana += values[s[0]];
	if (s[1] == dom) luana+=4;
    }
    for (int i = 0; i < 3; i++)
    {
	cin >> s;
	edu += values[s[0]];
	if (s[1] == dom) luana+=4;
    }

    if (luana > edu) cout << "Luana\n";
    else if (edu > luana) cout << "Edu\n";
    else cout << "empate\n";

    return 0;
}

