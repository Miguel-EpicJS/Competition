#include <bits/stdc++.h>

using namespace std;

long long cnt[1000010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;

    cin >> n;

    vector<long long> arr;

    long long sum = 0;


    for (int i = 0; i < n; i++)
    {
	long long x;
	cin >> x;
	arr.push_back(x);
	sum += x;
    }

    if (sum % 3 != 0)
    {
	cout << "0\n";
	return 0;
    }

    int spaces = 0;
    long long curr = 0;
    long long s = sum/3;

    for (int i = n-1; i >= 0; --i)
    {
	curr += arr[i];
	if (curr == s) cnt[i] = 1;
    }
    for (int i = n-2; i >= 0; --i)
    {
	cnt[i] += cnt[i+1];
    }

    long long ans = 0;
    curr = 0;
    for (int i = 0; i+2 < n; i++)
    {
	curr += arr[i];
	if (curr == s) ans += cnt[i+2];
    }

    cout << ans << "\n";

    return 0;
}

