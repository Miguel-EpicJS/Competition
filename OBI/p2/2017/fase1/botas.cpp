#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    int a[35][2];

    memset(a, 0, sizeof(a));

    for (int i = 0; i < n; i++)
    {
	int x;
	char y;
	cin >> x >> y;
	x -= 30;
	
	if (y == 'D')
	{
	    a[x][0] += 1;
	}
	else
	{
	    a[x][1] += 1;
	}

    }

    int tot = 0;

    for (int i = 0; i < 35; i++)
    {
	if (a[i][0] == 0 || a[i][0] == 0)
	{
	    continue;
	}

	int b = (a[i][0] > a[i][1] ? a[i][1] : a[i][0]);
	tot += b;
    }

    cout << tot << "\n";
    
    return 0;
}

