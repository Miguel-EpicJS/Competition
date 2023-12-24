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
	long long x, y, z, a, b, c, n, m, k;

	cin >> n;

	string s;

	cin >> s;

	set<char> ss;

	long long ans = 0;

	k = 0;

	for (auto i : s)
	{

	    if (ss.find(i) == ss.end()) k++;
	    ans += k;
	    ss.insert(i);

	}

	cout << ans << "\n";	
	
    }
    

    return 0;
}

