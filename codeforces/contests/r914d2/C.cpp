#include <iostream>
#include <cstdint>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int testcase = 0; testcase < t; ++testcase) {
        int64_t n, k;
        cin >> n >> k;
        vector<int64_t> arr(n);

        for (int64_t i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int64_t ans = LLONG_MAX;
	for (int64_t i : arr) {
                ans = min(ans, i);
        }
        if (k >= 3) {
            cout << "0" << endl;
        } else if (k == 1) {
            for (int64_t i : arr) {
                ans = min(ans, i);
            }
            for (int64_t i = 0; i < n; ++i) {
                for (int64_t j = 0; j < n; ++j) {
                    if (i == j) {
                        continue;
                    }
                    ans = min(abs(arr[i] - arr[j]), ans);
                }
            }
            cout << ans << endl;
        } else {
            vector<int64_t> modf;
            for (int64_t i : arr) {
                ans = min(ans, i);
            }
	    sort(arr.begin(), arr.end());
            for (int64_t i = 0; i < n; ++i) {
                for (int64_t j = 0; j < n; ++j) {
                    if (i == j) {
                        continue;
                    }
                    ans = min(ans, abs(arr[i] - arr[j]));
		    auto l = lower_bound(arr.begin(), arr.end(), abs(arr[i]-arr[j])) - arr.begin();
		    if (l == 0) ans = min(ans, abs(arr[1] - abs(arr[i] - arr[j])));
		    else if (l == arr.size()) ans = min(ans, abs(arr[n-1] - abs(arr[i] - arr[j])));
		    else
		    {
			ans = min(ans, abs(arr[l-1] - abs(arr[i] - arr[j])));
			ans = min(ans, abs(arr[l+1] - abs(arr[i] - arr[j])));
			ans = min(ans, abs(arr[l] - abs(arr[i] - arr[j])));
		    }
                }
            }


            cout << ans << endl;
        }
    }

    return 0;
}

