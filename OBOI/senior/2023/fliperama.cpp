#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	arr[i] = x;
    }

    long long tot = 0;

    int i = 0, j = n-1;

    while (i < j)
    {
	int sub = min(arr[i], arr[j]);
	arr[i] -= sub;
	arr[j] -= sub;

	tot += sub;

	if (j - i == 1 && arr[i] == 0 && arr[j] == 0)
	{
	    break;
	}
	if (arr[i] == 0) i++, tot++;
	if (arr[j] == 0) j--, tot++;
    }

    if (i == j && arr[i] % 2 == 1)
    {
	cout << "-1\n";
	return 0;
    }
    else
    {
	tot += arr[i] / 2;
    }

    cout << tot << "\n";

    return 0;
}

