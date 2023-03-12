#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, c, m;

    cin >> n >> c >> m;

    set<int> f;

    for (int i = 0; i < c; i++)
    {
	int x;
	cin >> x;
	f.insert(x);
    }

    int t = 0;

    for (int i = 0; i < m; i++)
    {
	int x;
	cin >> x;
	f.erase(x);
    }

    cout << f.size() << "\n";

    return 0;
}

