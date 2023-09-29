#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s, ss = "", temp = "";

    cin >> s;

    if (s.size() == 1)
    {
	cout << "1\n";
    }
    else if (s.size() == 2)
    {
	cout << "2\n";
    }
    else
    {
	int ans = 1;
	if (s[0] == s[1])
	{
	    cout << s.size() << "\n";
	}
	else
	{
	    if (s[0] == '0' && s[1] == '1')
	    {
		ss = "0";
	    }
	    else
	    {
		ss = "1";
	    }

	    while(ss != s)
	    {
		for (auto i : ss)
		{
		    if(i == '1')
		    {
			temp+= '1';
			temp+= '0';
		    }
		    else
		    {
			temp+= '0';
			temp+= '1';
		    }
		}
		ss = temp;
		temp = "";
		ans++;
	    }
	    cout << ans << "\n";
	}
    }

    return 0;
}

