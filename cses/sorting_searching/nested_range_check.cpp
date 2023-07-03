#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<bool> contains(n), contained(n);

    vector<vector<int>> ranges1, ranges2;

    for (int i = 0; i < n; i++)
    {
	int x, y;
	cin >> x >> y;
	ranges1.push_back({x, -y, i});
    }

    sort(ranges1.begin(), ranges1.end());

    vector<int> big = {0,0,0};

    int maxL = 0;

    for (int i = 0; i < n; i++)
    {
	if (-ranges1[i][1] > maxL) maxL = -ranges1[i][1];
	else
	{
	    contained[ranges1[i][2]] = true;
	}
    }
    maxL = 2099999999;
    for (int i = n-1; i >= 0; i--)
    {
	if (-ranges1[i][1] < maxL) maxL = -ranges1[i][1];
	else
	{
	    contains[ranges1[i][2]] = true;
	}
    }

    for (auto i : contains) cout << i << " ";
    cout << "\n";
    for (auto i : contained) cout << i << " ";
    
    return 0;
}

