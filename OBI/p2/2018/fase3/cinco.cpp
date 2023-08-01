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

    char x;
    
    int count = 0;

    int l0 = 1999, h0 = -1, l5 = 1999, h5 = -1;

    for (int i = 0; i< n; i++)
    {
	cin >> x;
	s+=x;
	if (x == '0' || x == '5')
	{
	    count++;
	    if (x == '0') l0 = min(l0, i), h0 = max(h0, i);
	    else l5 = min(l5, i), h5 = max(h5, i);
	}
    }

    if (count == 0)
    {
	cout << "-1\n";
	return 0;
    }

    if (s.back() < '5' && l0 != 1999)
    {
	swap(s[l0], s[n-1]);
    }
    else if (s.back() < '5' && l0 == 1999)
    {
	swap(s[h5], s[n-1]);
    }
    else if (s.back() > '5' && l5 < l0)
    {
	swap(s[l5], s[n-1]);
    }
    else if (s.back() > '5' && l5 > l0)
    {
	swap(s[l0], s[n-1]);
    }

    for (auto i : s)
    {
	cout << i << " ";
    }

    return 0;
}

