#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    string s = "";

    for (int i = 0; i < n; i++)
    {
	string x;
	cin >> x;
	if (i % 2 == 1)
	{
	    reverse(x.begin(), x.end());
	}

	s += x;
    }
    int r = 0;
    int mR = 0;
    for (auto i : s)
    {
	if (i == 'o')
	{
	    r++;
	}
	else if (i == 'A')
	{
	    r = 0;
	}
	mR = max(r, mR);
    }

    cout << mR << "\n";

    return 0;
}

