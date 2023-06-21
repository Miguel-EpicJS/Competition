#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, d;

    cin >> n >> d;

    vector<int> b(n+1);

    int amo = 0;

    for (int i = 1; i <= n; i++)
    {
	cin >> b[i];
    }
    b[0] = 0;
    for (int i = 1; i <= n; i++)
    {
	b[i] += b[i-1];

    } 

    auto lw = lower_bound(b.begin(), b.end(), b[0]+d);

    for (int i = 0; i < n; i++)
    {
	lw = lower_bound(b.begin()+1, b.end(), b[i]+d);
	int dis = distance(b.begin()+i+1, lw);

	amo = max(amo, dis);
    }

    cout << amo;

    return 0;
}

