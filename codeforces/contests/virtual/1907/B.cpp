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
	deque<pair<char, int>> up, lw;

	string s;

	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
	    
	    if (isupper(s[i]) && s[i] != 'B')
	    {
		up.push_back({s[i], i});
	    }
	    else if (!isupper(s[i]) && s[i] != 'b')
	    {
		lw.push_back({s[i], i});
	    }
	    else if (s[i] == 'b' && lw.size() > 0)
	    {
		lw.pop_back();
	    }
	    else if (s[i] == 'B' && up.size() > 0)
	    {
		up.pop_back();
	    }


	}
    
	string ans = "";

	while(up.size() > 0 || lw.size() > 0)
	{

	    if (up.size() > 0 && lw.size() > 0)
	    {
		auto a = up.front();
		auto b = lw.front();
		if (a.second > b.second) ans += b.first, lw.pop_front();
		else ans += a.first, up.pop_front();
	    }
	    else if (up.size() > 0)
	    {
		ans += up.front().first;
		up.pop_front();
	    }
	    else 
	    {
		ans += lw.front().first;
		lw.pop_front();
	    }

	}

	cout << ans << "\n";



    }

    return 0;
}

