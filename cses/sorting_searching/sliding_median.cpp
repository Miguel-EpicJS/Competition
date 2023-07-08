#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, x;

    cin >> n >> k;

    vector<int> arr(n);

    ordered_set sets;

    for (int i = 0; i < n; i++)
    {
	cin >> x;
	arr[i] = x;
	sets.insert({x, i});
	if (i >= k) sets.erase(sets.lower_bound({arr[i-k], 0}));
	if (i >= k - 1) cout << (*sets.find_by_order((k-1)/2)).first << " ";
    }

    return 0;
}

