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
	int a, b;

	cin >> a >> b;

	a = abs(a);
	b = abs(b);

	if (a > b) swap(a, b);

	int tot = a * 2;
	b -= a;
	if (b != 0)
	{
	    tot += (b*2) - 1;
	}
	cout << tot << "\n";
    }

    return 0;
}

