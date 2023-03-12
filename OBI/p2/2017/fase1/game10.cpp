#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, d, a;

    cin >> n >> d >> a;

    if (a <= d)
    {
	cout << d - a << "\n";
    }
    else
    {
	cout << n - (a-d) << "\n";
    }

    return 0;
}

