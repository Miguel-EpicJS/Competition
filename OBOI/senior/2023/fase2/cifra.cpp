#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s1, s2;

    cin >> s1 >> s2;

    set<int> diffds;

    for (int i = 0; i < min(s1.size(), s2.size()); i++)
    {
	diffds.insert(s1[i]-s2[i]);
    }

    if(s1.size() != s2.size() || diffds.size() > 1)
    {
	cout << "N\n";
    }
    else
    {
	cout << "S\n";
    }

    return 0;
}

