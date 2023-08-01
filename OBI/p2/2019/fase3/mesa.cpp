#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    a = a % 3;
    b = b % 3;
    if (b == a)
    {
	b++;
	b = b % 3;
    }

    cout << 3-a-b << "\n";

    return 0;
}

