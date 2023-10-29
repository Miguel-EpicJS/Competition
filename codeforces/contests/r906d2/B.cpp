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

	int n1, n2;

	cin >> n1 >> n2;

	
	string s1, s2;

	cin >> s1 >> s2;

	bool ok1 = true, ok2 = true;

	char f, l;

	f = s2[0];
	l = s2[n2-1];
	for (int i = 1; i < n1; i++)
	{
	    if (s1[i] == s1[i-1]) ok1 = false;
	}

	for (int i = 1; i < n2; i++)
	{
	    if (s2[i] == s2[i-1]) ok2 = false;
	}

	if (ok1 == true)
	{
	    cout << "YES\n";
	}
	else if (ok2 == false)
	{
	    cout << "NO\n";
	}
	else
	{
	    bool ok = true;
	    for (int i = 1; i < n1; i++)
	    {
		if (s1[i] == s1[i-1])
		{
		    if (s1[i] != l && s1[i-1] != f)
		    {
			// nothing
		    }
		    else
		    {
			ok = false;
			break;
		    }
		}
	    }
	    if (ok)
	    {
		cout << "YES\n";
	    }
	    else
	    {
		cout << "NO\n";
	    }
	}


    }

    return 0;
}

