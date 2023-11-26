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

	string s;
	cin >> s;

	int amount = 0;
	bool hasT = false;
	for (int i = 1; i < n-1; i++)
	{
	    if (s[i] == '.' && s[i-1] == '.' && s[i+1] == '.' ) hasT = true;
	}

	if (hasT)
	{
	    cout << "2\n";
	}
	else
	{
	    for (auto i : s)
	    {
		if (i == '.') amount++;
	    }
	    cout << amount << "\n";
	}
    }

    return 0;
}

