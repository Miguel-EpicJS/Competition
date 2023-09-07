#include <bits/stdc++.h>

using namespace std;
// from https://www.geeksforgeeks.org/cpp-program-for-program-to-find-lcm-of-two-numbers/

long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
   
    return gcd(b, a % b);
}
 
long long lcm(int a, int b) {
      return (a / gcd(a, b)) * b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    
    cin >> t;

    while(t--)
    {
	long long a, b, c, n, m, x, y, z, k, w;

	cin >> x >> a >> b;

	if (a == b) 
	{
	    cout << "0\n";
	}
	else if (a % b == 0)
	{
	    c = x / a;
	    y = x / b;
	    y -= c;
	    cout << y*(y+1)/2 * -1 << "\n";
	}
	else
	{
	    c = lcm(a, b);
	
	    c = x/c;
	    a = x/a;
	    b = x/b;


	
	    cout << c << " " << a << " " << b << "\n";
	

	}
		
    }

    return 0;
}

