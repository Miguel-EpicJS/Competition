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
    
    for (int i = 0; i< n; i++)
    {
	cin >> x;
	s+=x;
    }

    string maxS = "";

    bool ok = false;

    for (int i = 0; i < n; i++)
    {
	if (s[i] == '5' || s[i] == '0')
	{
	    swap(s[i], s[n-1]);
	    maxS = max(maxS, s);
	    swap(s[i], s[n-1]);
	    ok = true;
	}
    }

    if (!ok)
    {
	cout << "-1\n";
	return 0;
    }

    for (auto i : maxS)
    {
	cout << i << " ";
    }
    cout << "\n";


    return 0;
}

