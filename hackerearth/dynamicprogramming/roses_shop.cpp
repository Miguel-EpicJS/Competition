#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        // remove i-th element
        vector<int> subarray;
        for (int j = 0; j < n; j++) {
            if (j != i) {
                subarray.push_back(arr[j]);
            }
        }

        // find length of longest increasing subarray
        int len = 1, max_len = 1;
        for (int j = 1; j < subarray.size(); j++) {
            if (subarray[j] > subarray[j-1]) {
                len++;
            } else {
                max_len = max(max_len, len);
                len = 1;
            }
        }
        max_len = max(max_len, len);

        ans = max(ans, max_len);
    }

    cout << ans << endl;


    return 0;
}

