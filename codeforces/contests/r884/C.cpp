#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while(t--)
    {
	int n, x;
	cin >> n;
	vector<int> arr;
	bool allN = true;
	for (int i = 0; i < n; i++)
	{
	    cin >> x;
	    if(x > 0) allN = false;

	    arr.push_back(x);
	}

	if (allN)
	{
	    cout << *max_element(arr.begin(), arr.end()) << "\n";
	}
	else
	{
	    long long m1 = 0, m2 = 0;
	    for (int i = 0; i < n; i+=2)
	    {
		if (arr[i] > 0) m1 += arr[i];
	    }
	    for (int i = 1; i < n; i+=2)
	    {
		if (arr[i] > 0) m2 += arr[i];
	    }

	    cout << max(m1, m2) << "\n";
	}
    }


    return 0;
}

