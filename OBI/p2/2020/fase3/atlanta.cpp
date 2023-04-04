#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    for (int i = 3; i < 1005; i++)
    {
	for (int j = 3; j < 1005; j++)
	{
	    int x = (i-2) * (j-2);
	    if (i*j == a+b && x == b &&  i*j - x == a)
	    {
		cout << i << " " << j << "\n";
		return 0;
	    }
	}
    }

    cout << "-1 -1\n";

    return 0;
}

