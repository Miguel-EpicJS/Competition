#include <bits/stdc++.h>

using namespace std;
//https://www.geeksforgeeks.org/prime-numbers/
bool isPrime(int n)
{
    // Check if n=1 or n=0
    if (n <= 1)
        return false;
    // Check if n=2 or n=3
    if (n == 2 || n == 3)
        return true;
    // Check whether n is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0)
        return false;
     
    // Check from 5 to square root of n
    // Iterate i by (i+6)
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}

pair<int, int> divs(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i == sqrt(n)) {
                return {i, i};
            } else {
                return {i, n/i};
            }
        }
    }
    return {1,1};
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
	int a, b, c, n, m, x, y, z, k, w;

	cin >> a >> b;

	if (a % 2 == 0 && a>2)
	{
	    cout << a/2 << " " << a/2 << "\n";
	}
	else if (b%2 == 0 && b>2)
	{
	    cout << b/2 << " " << b/2 << "\n";
	}
	else if ((a == 2 && (b == 3 || b == 2)) || (a==1 && (b == 1 || b == 2 || b == 3)) || (a == 3 && (b==3)))
	{
	    cout << "-1\n";
	}
	else if (a+1 < b && a!= 2)
	{
	    a++;
	    cout << a/2 << " " << a/2 << "\n";
	}
	else if (a==b && isPrime(a))
	{
	    cout << "-1\n";
	}
	else
	{
	    x = divs(a).first; 
	    y = divs(a).second;

	    cout << a/x << " " << a - a/x << "\n";
	}

    }

    return 0;
}

