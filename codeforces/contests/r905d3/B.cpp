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
	long long k, n;
	string s;
	cin >> n >> k >> s;
	
	map<char, int> arr;
	for (auto i : s)
	{
	    arr[i]++;
	}

	if (k == 0)
	{
	    int p = 0, j = 0;

	    for (char i = 'a'; i <= 'z'; i++)
	    {
		if (arr[i]%2==0)p++;
		else j++;
	    }
	    if (j <= 1) cout << "YES\n";
	    else cout << "NO\n";
	}
	else 
	{
	    int p = 0, j = 0;

	    for (int i = 'a'; i <= 'z'; i++)
	    {
		if (arr[i]%2==0)p++;
		else j++;
	    }
	    if (k >= j-1) cout << "YES\n";
	    else cout << "NO\n";
	}

    }

    return 0;
}

