#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string n;

    getline(cin, n);

    bool p = true;

    string res = "";
    for (auto i : n)
    {
	if (i == ' ')
	{
	    res += " "; 
	    continue;
	}

	if (!p)
	{
	    res += i;
	}
	p = !p;
    }
    cout << res;

    return 0;
}

