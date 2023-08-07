#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	arr.push_back(x);
    }

    int mx = *max_element(arr.begin(), arr.end());
    int mn = *min_element(arr.begin(), arr.end());

    for (auto i : arr)
    {
	cout << max(mx - i, i - mn) << "\n";
    }

    return 0;
}

