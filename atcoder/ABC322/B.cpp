#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;
    
    string s, t;

    cin >> s >> t;

    string t1 = "", t2 = "";

    for (int i = 0; i < n; i++)
    {
	t1 += t[i];
    }
    for (int i = m-n; i < m; i++)
    {
	t2 += t[i];
    }

    if (s == t1 && s == t2)
    {
	cout << "0\n";
    }
    else if (s == t1)
    {
	cout << "1\n";
    }
    else if (s == t2)
    {
	cout << "2\n";
    }
    else
    {
	cout << "3\n";
    }

    return 0;
}

