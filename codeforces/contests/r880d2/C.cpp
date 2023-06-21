#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while (t--)
    {
	int a, b, c;
	long long k;

	cin >> a >> b >> c >> k;

	if(c > max(a, b)+1)
	{
	    cout << "-1\n";
	}
    }
    return 0;
}

