#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while (t--)
    {
	int n;
	cin >> n;
	vector<int> a(n);

	int tot = 0;
	int prod = 1;
	int neg = 0;
	int pos = 0;

	for (int i = 0; i < n; i++)
	{
	    cin >> a[i];
	    tot += a[i];
	    prod *= a[i];
	    if (a[i] == -1) neg++;
	    else pos++;
	}

	if (tot >= 0 && neg % 2 == 0)
	{
	    cout << "0\n";
	}
	else 
	{
	    int c = 0;
	    for (int i = 0; i < n; i++)
	    {
		if (a[i] == -1)
		{
		    tot += 2;
		    neg++;
		    c++;
		}
		if (tot >= 0 && neg % 2 == 0)
		{
		    cout << c << "\n";
		    break;
		}
	    }
	}
    }

    return 0;
}

