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
	int n;

	string s;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
	    char x;
	    cin >> x;
	    s += x;
	}

	if (s.back() == '1')
	{
	    cout << "NO\n";
	}
	else 
	{
	    cout << "YES\n";
	    vector<int> pos;
	    int m = 1;
	    bool v = false;
	    for (auto i : s)
	    {
		if (i == '0' && v == false)
		{
		    pos.push_back(m);
		}
		else if (i == '1')
		{
		    v = true;
		    m++;
		}
		else if (i == '0')
		{
		    v = false;
		    pos.push_back(m);
		    m = 1;
		}
	    }
	    reverse(pos.begin(), pos.end());
	    for (auto i : pos)
	    {
		for (int j = 0; j < i-1; j++)
		{
		    cout << "0 ";
		}
		cout << i-1 << " ";
	    }
	    cout << "\n";
	}
    }

    return 0;
}

