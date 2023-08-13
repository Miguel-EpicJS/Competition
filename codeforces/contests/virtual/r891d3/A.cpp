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

	int sum = 0;
	
	int tot = n;

	while(n--)
	{
	    int x;
	    cin >> x;
	    sum+=x;
	}
	if (tot > 1 && sum % 2 == 0)
	{
	    cout << "YES\n";
	}
	else
	{
	    cout << "NO\n";
	}

    }

    return 0;
}

