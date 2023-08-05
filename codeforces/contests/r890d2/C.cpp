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

	cin >> n >> k;
	vector<int> arr1, arr2;
	a = 0;
	for (int i = 0; i < n; i++)
	{
	    cin >> x;
	    arr1.push_back(x);
	    a = max(a, x);
	}

	for (int i = 0; i < n; i++)
	{
	    b = 0;
	    c = 0;
	    for (int j = 0; j < n-1; j++)
	    {
		if (arr1[j] <= arr1[j+1] && arr1[j] > b)
		{
		    b = arr1[j];
		    c = j;
		}
	    }
	    if (arr1[c+1] == arr1[c] && k > 0)
	    {
		k--;
		arr1[c]++;
	    }
	    else if (k - (arr1[c+1] - arr1[c]) >= 0)
	    {
		if (c > 0 && arr1[c-1] > arr1[c+1] && k - (arr1[c-1] - arr1[c]) >= 0)
		{
		    k -= (arr1[c-1] - arr1[c]);
		    arr1[c] = arr1[c-1];
		}
		else
		{
		    k -= (arr1[c+1] - arr1[c]);
		    arr1[c] += (arr1[c+1] - arr1[c]);
		}
	    }
	    else
	    {
		arr1[c] += k;
		k = 0;
	    }
	    a = max(a, arr1[c]);
	}

	for (auto i : arr1)
	{
	    cout << i << " ";
	}
	
	cout << a << "\n";
    }


    return 0;
}

