#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    long long s = 0;

    vector<int> arr, arr2;

    for (int i = 1; i <= n; i++)
    {
	arr.push_back(i);
	arr2.push_back(i);
    }

    reverse(arr2.begin(), arr2.end());

    for (int i = 0; i < n; i++)
    {
	s += abs(arr[i] - arr2[i]);
    }

    cout << s << "\n";

    return 0;
}

