#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string s;

    cin >> n >> s;


    for (int i = 1; i < n-1; i++)
    {
	if (s[i] == 'B' && s[i-1] == 'A' && s[i+1] == 'C')	
	{
	    cout << i << "\n";
	    return 0;
	}
    }

    cout << "-1\n";

    return 0;
}

