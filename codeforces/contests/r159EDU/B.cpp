#include <bits/stdc++.h>

using namespace std;

bool ok(long long n, long long mn, long long l, long long t, long long p)
{
    long long task = min((long long)ceil(mn/7.0), n*2LL) * p;
    long long pts = n*t;
    return ((pts + task)>= l); 
}


bool ok2(long long n, long long mn, long long l, long long t, long long p)
{
    long long task = min((long long)ceil(mn/7.0), n*2LL) * p;
    long long pts = n*t;

    cout << min((long long)ceil(mn/7.0), n*2LL) << " " << n << " " << task+pts << " ";

    return ( (pts + task) >= l); 
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while (t--)
    {
	long long n, l, t, p;

	cin >> n >> l >> t >> p;

	//https://cses.fi/book/book.pdf p. 33
	long long x = -1, z = n;

	for (int b = z; b >= 1; b /= 2) {
	    while (!ok(x+b, n, l, t, p)) x += b;
	}
	long long k = x+1;

	cout << n-k << "\n";

    }

    return 0;
}

