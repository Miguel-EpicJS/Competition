#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<int, int> cnt;

    for (int i = 0; i < 8; i++)
    {
	int x;
	cin >> x;
	cnt[x]++;
	if (cnt[x] >= 5)
	{
	    cout << "N\n";
	    return 0;
	}
    }

    cout << "S\n";

    return 0;
}

