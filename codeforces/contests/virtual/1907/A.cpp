#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    string str = "abcdefgh";

    while(t--)
    {
	string s;

	cin >> s;

	for (int i = 1; i <= 8; i++)
	{
	    if (s[1]-'0' == i) continue;

	    cout << s[0] << i << "\n";
	}
	
	for (auto i : str)
	{
	    if (s[0] == i) continue;

	    cout << i << s[1] << "\n";
	}
    }

    return 0;
}

