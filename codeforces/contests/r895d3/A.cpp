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
	int a, b, c, n, m, x, y, z, k, w;

	vector<int> arr;
	cin >> a >> b >> c;
	if (a < b) swap(a, b);
    
	k = a-b;

	cout << ceil(k/(2.0*c)) << "\n";
    }

    return 0;
}

