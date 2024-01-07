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

	long long n, m, a, b;

	string s;

	cin >> n >> s;

	a = 0, b = 0;

	for (auto i : s)
	{
	    if (i == '+') a++;
	    else b++;
	}

	cout << (n - 2 * min(a, b)) << "\n";

    }

    return 0;
}

