#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<string> s;

    for (int i = 0; i < n; i++)
    {
	string x;
	cin >> x;

	s.push_back(x);

	for (int j = 0; j < s.size(); j++)
	{
	    for (int k = 0; k < s.size(); k++)
	    {
		if (s[k].compare(x) == 0)
		    continue;

		string s1 = s[j]+s[k];
		string s2 = s[k]+s[j];

		if (s1.find(x) != string::npos || s2.find(x) != string::npos)
		{
		    cout << x << "\n";
		    return 0;
		}
	    }
	}

    }

    cout << "ok\n";
	
    return 0;
}

