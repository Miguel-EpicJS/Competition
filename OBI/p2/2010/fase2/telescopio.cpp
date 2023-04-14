#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, t =0, m;

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
	int x;
	cin >> x;
	if (x * n >= 40000000)
	    t++;
    }

    cout << t << "\n";

    return 0;
}

