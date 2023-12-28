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
	long long a, b, c, n;

	cin >> n;

	c = 0;


	for(int i = 0; i < n; i++)
	{
	    cin >> a;
	    c+=a;
	}
	b = sqrt(c);
	if (b*b == c) cout << "YES\n";
	else cout << "NO\n";
    }

    return 0;
}

