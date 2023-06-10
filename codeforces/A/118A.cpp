#include <bits/stdc++.h>

using namespace std;

unsigned char low(unsigned char c)
{
    return tolower(c);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin >> s;

    transform(s.begin(), s.end(), s.begin(), low);

    string o = "";

    for (auto i : s)
    {
	if (i != 'a' && i != 'o' && i != 'y' && i != 'e' && i != 'u' && i != 'i')
	{
	    o += '.';
	    o += i;
	}
    }

    cout << o << "\n";

    return 0;
}

