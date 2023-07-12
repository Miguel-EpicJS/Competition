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
	int n;

	cin >> n;

	int i = 1;

	while(true)
	{
	    if (n % i != 0) break;
	    i++;
	}

	for (int j = 0; j < n; j++) cout << (char)('a'+(j%i));
	cout << "\n";
    }

    return 0;
}

