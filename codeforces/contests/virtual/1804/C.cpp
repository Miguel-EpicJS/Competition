#include <bits/stdc++.h>

using namespace std;

bool isTriangular(int num)
{
    if (num < 0)
        return false;
 
    int c = (-2 * num);
    int b = 1, a = 1;
    int d = (b * b) - (4 * a * c);
 
    if (d < 0)
        return false;
 
    float root1 = ( -b + sqrt(d)) / (2 * a);
    float root2 = ( -b - sqrt(d)) / (2 * a);
 
    if (root1 > 0 && floor(root1) == root1)
        return true;
 
    if (root2 > 0 && floor(root2) == root2)
        return true;
 
    return false;
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
	int n, x, p;

	cin >> n >> x >> p;

	int f = n - x;


	if ((isTriangular(f) || isTriangular(n+f)) && f <= (p*(p+1))/2)
	{
	    cout << "Yes\n";
	}
	else
	{
	    cout << "No\n";
	}

    }

    return 0;
}

