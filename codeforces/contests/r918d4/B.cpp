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
	string a, b, c;

	cin >> a >> b >> c;

	set<char> sa(a.begin(), a.end()), sb(b.begin(), b.end()), sc(c.begin(), c.end());

	if (sa.find('?') != sa.end())
	{
	    if (sa.find('A') == sa.end()) cout << "A\n";
	    if (sa.find('B') == sa.end()) cout << "B\n";
	    if (sa.find('C') == sa.end()) cout << "C\n";
	}
	if (sb.find('?') != sb.end())
	{
	    if (sb.find('A') == sb.end()) cout << "A\n";
	    if (sb.find('B') == sb.end()) cout << "B\n";
	    if (sb.find('C') == sb.end()) cout << "C\n";
	}
	if (sc.find('?') != sc.end())
	{
	    if (sc.find('A') == sc.end()) cout << "A\n";
	    if (sc.find('B') == sc.end()) cout << "B\n";
	    if (sc.find('C') == sc.end()) cout << "C\n";
	}



    }

    return 0;
}

