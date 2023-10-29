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
	cin >> n;

	string s1;

	cin >> s1;
	set<char> sss;
	multiset<char>ms;
	for(auto i : s1)
	{
	    sss.insert(i);
	    ms.insert(i);
	}

	if (n%2 == 1 || sss.size() == 1 || ms.count('0')-ms.count('1') != 0)
	{
	    cout << "-1\n";
	}
	else
	{
	    vector<int> ops;
	
	    int i = 1;
	    int k = s1.size();
	    while (i <= k)
	    {
		k = s1.size();
		if (s1[i-1] != s1[k-i])
		{
		    i++;
		}
		else if (s1[i-1] == '0')
		{
		    s1.insert(k-i+1, "01");
		    ops.push_back(k-i+1);
		}
		else
		{
		    s1.insert(i-1, "01");
		    ops.push_back(i-1);
		}
	    }

	    cout << ops.size() << "\n";
	    for (auto i : ops)
	    {
		cout << i << " ";
	    }
	    cout << "\n";
	}

    }

    return 0;
}

