#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	arr[i] = x;
	if (i == 0)
	{
	    cout << x << " ";
	    continue;
	}
	if (x < arr[i-1])
	{
	    cout << arr[i-1] << " ";
	    arr[i] = arr[i-1];
	}
	else 
	{
	    cout << x << " ";
	}
    }

    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    while (n--) solve();

    return 0;
}

