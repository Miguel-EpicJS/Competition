#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin >> s;

    sort(s.begin(), s.end());

    map<string, bool> m;
    int tot = 0;

    do {
	if (m[s] == false)
	{
	    tot++;
	    m[s] = true;
	}
    } while(next_permutation(s.begin(), s.end()));

    cout << tot << "\n";

    for (auto i : m)
    {
	cout << i.first << "\n";
    }

    return 0;
}

