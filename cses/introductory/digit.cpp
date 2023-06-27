#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    long long k;

    long long l, i, x, y = 0;


    while(n--)
    {
	cin >> k;
    
	l = i = 1;

	while (k > 9 * l * i)
	{
	    k -= 9 * l * i;
	    
	    l += 1;
	    i *= 10;
	}

	x = (k-1)/l;
	y = (k-1)%l;
	
	cout << to_string(i + x)[y] << "\n";

    }

    return 0;
}

