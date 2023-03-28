#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a = 0, b = 0;

    int n;

    cin >> n;

    while (n--)
    {
	int t[2][3];
	for (int i = 0; i < 2; i++)
	{
	    for (int j = 0; j < 3; j++)
	    {
		int x;
		cin >> x;
		if (x <= 3)
		{
		    x += 20;
		}
		t[i][j] = x;
	    }
	}
	

	int p1 = 0, p2 =0 ;
	for (int i = 0; i < 3; i++)
	{
	    if (t[0][i] >= t[1][i])
	    {
		p1++;
	    }
	    else
	    {
		p2++;
	    }
	}
	a += (p1 >= p2);
	b += (p2 > p1);
    }

    cout << a << " " << b << "\n";

    return 0;
}

