#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<bool> s(n+1);
    s[0] = true;
    int x;

    for (int i = 1; i < n; i++)
    {
	cin >> x;
	s[x] = true;
    }

    for (int i = 0; i <= n; i++)
    {
	if (!s[i])
	{
	    cout << i << "\n";
	    break;
	}
    }


    return 0;
}

