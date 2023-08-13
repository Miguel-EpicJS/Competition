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
	string n;

	cin >> n;

	string cp = "";
	
	int izth = -1;

	for (int i = 0; i < n.size(); i++)
	{
	    if (n[i] >= '5'){ izth = i; break;}
	}

	if (izth = -1)
	{
	    cout << n << "\n";
	}
	else
	{
	    if (izth == 0)
	    {
		cp = "1";
		while (cp.size() - 1 != n.size()) cp += '0';
		cout << cp << "\n";
	    }
	    else
	    {
		for (int i = 0; i < izth; i++)
		{
		    cp += n[i];
		}
		cp[izth-1] += 1;
		if (cp[izth-1] == '5')
		{
		    int k = izth-1;
		    while(cp[k] == '5')
		    {
			cp[k] = '0';
			
		    }
		    if (cp[0] == '0')
		    {
			cp = '1' + cp;
		    }
		    else
		    {
			cp[k-1] += 1;
		    }
		}
		for (int i = izth; i < n.size(); i++)
		{
		    cp += n[i];
		}

		cout << cp << "\n";
	    }
	}

    }

    return 0;
}

