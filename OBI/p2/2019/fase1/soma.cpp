#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, k;

    cin >> n >> k;

    vector<int> arr(n);
    
    long long count = 0;
    unordered_map<long long, int> prefix_sum;
    prefix_sum[0] = 1;
    long long cur = 0;
    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
	cur += arr[i];

	prefix_sum[cur-k] += 0;

	count += prefix_sum[cur - k];

	prefix_sum[cur]++;

    }
    


    cout << count << "\n";
    return 0;
}

