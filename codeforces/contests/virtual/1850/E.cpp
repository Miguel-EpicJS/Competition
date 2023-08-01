#include <bits/stdc++.h>
#define int long long

using namespace std;
int32_t main()
{

    int t;

    cin >> t;

    while(t--)
    {
	int n, c; cin >> n >> c;
        vector<int> a(n);
	for(int i = 0; i < n; ++i) cin >> a[i];
        int l = 1, r = 1e9;
	while(l <= r) {
	    int mid = l + (r - l) / 2;
	    int sumall = 0;
	    for(int i = 0; i < n; ++i) {
		sumall += (a[i] + 2 * mid) * (a[i] + 2 * mid);
	        if(sumall > c) break;
	    }
	    if(sumall == c) {
		cout << mid << "\n";
		break;
	    }
	    if(sumall > c) {
		r = mid - 1;
	    } else {
		l = mid + 1;
	    }
	}

    }
    
    return 0;
}

