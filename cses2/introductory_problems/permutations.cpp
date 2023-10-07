#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    if (n == 1) cout << "1\n";
    else if (n == 2 || n == 3) cout << "NO SOLUTION\n";
    else
    {
	for (int i = 2; i <= n; i+=2)
	{
	    cout << i << " ";
	}
	for (int i = 1; i <= n; i+=2)
	{
	    cout << i << " ";
	}
	cout << "\n";
    }

    return 0;
}

