#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    
    cin >> n;

    vector<long long> money(n+1);

    int tot = 0, mtot = 0;
    long long last = 0;

    for (int i = 0; i < n; i++)
    {
	cin >> money[i];

	if (money[i] >= last)
	{
	    tot++;
	}
	else
	{
	    tot = 1;
	}
	last = money[i];
	mtot = max(mtot, tot);
    }

    cout << mtot << "\n";

    return 0;
}

