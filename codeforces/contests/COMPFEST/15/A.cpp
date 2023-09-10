#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    int m = INT_MAX;

    while(n--)
    {
	int x;
	cin >> x;
	m = min(m, abs(x));
    }

    cout << m << "\n";

    return 0;
}

