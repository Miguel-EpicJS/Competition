#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    
    cin >> t;

    while(t--)
    {

	long long n;

	cin >> n;

	vector<pair<long long, int>> arr1, arr2;

	for (int i = 0; i < n; i++)
	{
	    long long x;
	    cin >> x;
	    arr1.push_back({x, i});
	    arr2.push_back({x, i});
	}

	sort(arr2.begin(), arr2.end());

	vector<long long> pref(n, 0);
	pref[0] = arr2[0].first;

	for (int i = 1; i < n; i++) pref[i] += arr2[i].first+pref[i-1];

	int ans = n-1;

	vector<int> answers(n, 0);

	answers[arr2.back().second] = ans;

	int lastR = 0;

	for (int i = n-2; i >= 0; i--)
	{
	    //cout << pref[i] << " " << arr2[i+1].first << " " << arr2[i].first << " |";
	    lastR++;
	    if (pref[i] < arr2[i+1].first)
	    {
		ans -= lastR, lastR = 0;
	    }
	    if (ans < 0) ans = 0;
	    answers[arr2[i].second] = ans;
	}

	for (auto i : answers) cout << i << " ";

	cout << "\n";
	
    }

    return 0;
}

