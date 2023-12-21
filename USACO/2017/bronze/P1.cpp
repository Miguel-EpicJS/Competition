#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);

    long long x, y;

    cin >> x >> y;

    bool sign = true;

    long long t = 0, c = 1, cnt, tmp = x;
    
    while(x!=y)
    {
	cnt = c;

	if (sign)
	{
	    while(x < (tmp + c))
	    {
		t++;
		x++;
		if (x == y) break;
		cnt--;
	    }
	}
	else
	{
	    while(x > (tmp-c))
	    {
		t++;
		x--;
		if (x == y) break;
		cnt--;
	    }
	}
	c *= 2;
	sign = !sign;
    }

    cout << t << "\n";

    return 0;
}

