#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    int c = n;

    int s = 0;

    while (c--)
    {
	int x;
	cin >> x;
	s+=x;
    }

    s-=n;

    cout << s << "\n";

    return 0;
}

