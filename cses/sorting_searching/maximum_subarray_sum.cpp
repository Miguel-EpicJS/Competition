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
	cin >> arr[i];
    }

    long long  a = arr[0];
    long long end = arr[0];

    for (int i = 1; i < n; i++)
    {
	end = max(end + arr[i], arr[i]);
	a   = max(a, end);
    }

    cout << a << "\n";

    return 0;
}

