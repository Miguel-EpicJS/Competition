#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin >> s;

    int m = 1;
    int c = 1;

    for (int i = 1; i < s.size(); i++)
    {
	if (s[i] == s[i-1])
	{
	    c++;
	    m = max(c, m);
	}
	else 
	{
	    c = 1;
	}
    }

    cout << m << "\n";

    return 0;
}

