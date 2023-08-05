#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;

    cin >> t;

    while(t--)
    {
	int a, b, c, x, y, z, n, m, k;

	cin >> n;

	vector<int> arr1, arr2(n);
	for (int i = 0; i < n; i++)
	{
	    cin >> x;
	    arr1.push_back(x);
	}
	a = -1;
	arr2[0] = arr1[0];
	for (int i = 1; i < n ;i++)
	{
	    arr2[i] = max(arr1[i], arr2[i-1]);
	    if (arr1[i] < arr1[i-1]) a = i-1;
	}
    if (a == -1)
    {
	cout << "0\n";
	continue;
    }
    cout << arr2[a] << "\n";


    }
        return 0;
}

