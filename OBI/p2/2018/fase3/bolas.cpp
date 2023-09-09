#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<int, int> freq;
    int q = 8;
    while(q--)
    {
	int x;
	cin >> x;
	freq[x]++;
    }

    for (auto i : freq)
    {
	if (i.second > 4)
	{
	    cout << "N\n";
	    return 0;
	}
    }

    cout << "S\n";

    return 0;
}

