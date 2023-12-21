#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<array<long long, 3>> vals;

    long long mod1 = 0, mod2 = 0, crr1 = INT_MAX, crr2 = INT_MAX;

    for (int i = 0; i < n; i++)
    {
	string x;
	long long y, z, k;
	cin >> x >> y >> z;

	if (x == "on") k = 1;
	else if (x == "none") k = 0;
	else k = -1;

	vals.push_back({k, y, z});
    }

        

    return 0;
}

