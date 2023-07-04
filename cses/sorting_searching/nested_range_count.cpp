#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp> 

using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<int> contains(n, 0), contained(n, 0);

    vector<vector<int>> ranges1, ranges2;

    for (int i = 0; i < n; i++)
    {
	int x, y;
	cin >> x >> y;
	ranges1.push_back({x, -y, i});
    }

    sort(ranges1.begin(), ranges1.end());

    vector<int> big = {0,0,0};

    ordered_set<pair<int, int>> bounds;

    for (int i = 0; i < n; i++)
    {
	bounds.insert({-ranges1[i][1], -1*i});
	contained[ranges1[i][2]] = bounds.size() - bounds.order_of_key({-ranges1[i][1],-1*i})-1;
    }
    bounds.clear();

    for (int i = n-1; i >= 0; i--)
    {
	bounds.insert({-ranges1[i][1], -1*i});
	contains[ranges1[i][2]] = bounds.order_of_key({-ranges1[i][1],-1*i});
    }


    for (auto i : contains) cout << i << " ";
    cout << "\n";
    for (auto i : contained) cout << i << " ";
    
    return 0;
}

