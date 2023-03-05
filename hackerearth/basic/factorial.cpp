#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    int tot = 1;

    for (int i = 2; i <= n; i++)
    {
	tot *= i;
    }

    cout << tot << "\n";

    return 0;
}

