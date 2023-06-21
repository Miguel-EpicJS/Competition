#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
    }

    int tot =0;

    for (int i = 0; i < n-1; i++)
    {
	if (arr[i] == m)
	{
	    continue;
	}

	tot += abs(arr[i] - m);
	int d= m-arr[i];
	
	arr[i] += d;
	arr[i+1] += d;

    }

    cout << tot << "\n";

    return 0;
}

