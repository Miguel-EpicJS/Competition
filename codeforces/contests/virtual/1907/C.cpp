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
	int n;

	cin >> n;

	string s;

	cin >> s;

	map<char, int> freq;

	for (auto i : s) freq[i]++;

	vector<int> freqs;

	for (auto i : freq)
	{
	    freqs.push_back(i.second);
	}

	int mx = 0;

	for (auto i : freqs) mx = max(mx, i);

	cout << max(n%2, mx*2-n) << "\n";




    }

    return 0;
}

