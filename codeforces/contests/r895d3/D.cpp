#include <bits/stdc++.h>
#include <numeric> 
#define int long long

using namespace std;

int rgsum(int l, int r)
{
    if (l > r) return 0;
    return (l+r)*(r-1+1) / 2;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    
    cin >> t;

    while(t--)
    {
	long long a, b, c, n, m, x, y, z, k, w;

	cin >> n >> a >> b;

	int red = n / a;
	int blue = n / b;
	int purple = n / (lcm(a, b));

	int R = red - purple;
	int B = blue - purple;
	
	cout << ((n+n-R+1)*R/2) - ((B+1)*B/2) << "\n";

    }

    return 0;
}

