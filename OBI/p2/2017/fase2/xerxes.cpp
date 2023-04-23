#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    int d = 0, x = 0;

    if (n > 999 || n < 1)
	return 0;

    while (n--)
    {
	int a, b;

	cin >> a >> b;

	if ((a+2) % 5 == b || (a+1) % 5 == b)
	{
	    d++;
	}
	else
	{
	    x++;
	}
    }

    if (d > x)
    {
	cout << "dario\n";
    }
    else
    {
	cout << "xerxes\n";
    }

    return 0;
}

