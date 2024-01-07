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

	long long n, m, a, b;

	cin >> n;

	vector<long long> arr, s, t;

	for (int i = 0; i < n; i++)
	{
	    cin >> a;
	    arr.push_back(a);
	}

	s.push_back(INT_MAX);
	t.push_back(INT_MAX);

	for (int i = 0; i < n; i++)
	{
	    if (s.back() >= arr[i]) s.push_back(arr[i]);
	    else t.push_back(arr[i]);
	}

	a = 0;

	for (int i = 0; i < s.size()-1; i++)
	{
	    if (s[i] < s[i+1]) a++;
	}
	for (int i = 0; i < t.size()-1; i++)
	{
	    if (t[i] < t[i+1]) a++;
	}

	cout << a << "\n";
    }

    return 0;
}

