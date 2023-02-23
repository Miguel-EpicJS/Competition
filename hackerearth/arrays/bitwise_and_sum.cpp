#include <bits/stdc++.h>

using namespace std;

int f(vector<int> &a, int n, int i, int j)
{
    int two = 33554431;

    i--;
    j--;

    for (; i <= j; i++)
    {
	a[i] = two;
    }
    int r = 0;
    for (int i = 0; i < n; i++)
    {
	r &= a[i];
    }

    return r;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
    }

    int s = 0;
    for (int i = 0; i <= 1; i++)
    {
	for (int j = 1; j <= n; j++)
	{
	    s += f(arr, n, j, j+i); 
	}
    }

    cout << s << "\n";
}

int main()
{

    int n;
    cin >> n;

    while(n--)
    {
	solve();
    }

    return 0;
}

