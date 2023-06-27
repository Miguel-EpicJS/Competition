#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    while(n--)
    {
	long long x, y;
	cin >> x >> y;

	if (max(x, y) <= min(x,y)*2 && (x+y) % 3 == 0)
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

