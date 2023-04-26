#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b, c, d;

    cin >> a >> b >> c >> d;

    if ((b == d && a != c && b != a && b != c) || (a == c && b != d && a != b && a != d))
    {
	cout << "V\n";
    }
    else
    {
	cout << "F\n";
    }


    return 0;
}

