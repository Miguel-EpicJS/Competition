#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;

    cin >> n >> k;

    int ans = 0;
    int x;
    vector<int> arr;

    while (n--)
    {
	cin >> x;
	arr.push_back(x);
    }

    int last = 0;

    for (int i = 0; i < arr.size(); i++)
    {
	if (arr[i] == 0) break;
	if (i+1 == k) last = arr[i];
	else if (i+1 > k && arr[i] != last) break;
	ans++;
    }

    cout << ans;

    return 0;
}

