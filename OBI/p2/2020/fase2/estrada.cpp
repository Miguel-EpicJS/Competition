#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n;

    cin >> t >> n;

    vector<int> s;

    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	s.push_back(x);
    }

    sort(s.begin(), s.end());

    double d =0; 

    d = min(s[0] + (s[1] - s[0])/2.0, (t-s[n-1] + (s[n-1] - s[n-2])/2.0));

    for (int i = 1; i < n-1; i++)
    {
	d = min(d, (s[i]-s[i-1])/2.0 + (s[i+1] - s[i])/2.0);
    }

    cout << fixed << setprecision(2) << d << "\n";

    return 0;
}

