#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    int a[3];
    a[1] = 0;
    a[2] = 0;

    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	a[x]++;
    }

    int b, c;

    cin >> b >> c;

    char r = 'S';

    if (a[1] < b || a[2] < c)
    {
	r = 'N';
    }

    cout << r << "\n";

    return 0;
}

