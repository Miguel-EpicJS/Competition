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
	char a;
	string s = "";
	for (int i = 0; i < 8; i++)
	{
	    for (int j = 0; j < 8; j++)
	    {
		cin >> a;
		if (a != '.') s += a;

	    }
	}	

	cout << s << "\n";

    }

    return 0;
}

