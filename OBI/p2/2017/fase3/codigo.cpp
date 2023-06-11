#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    unordered_map<string, bool> pre, suf;

    

    for (int i = 0; i < n; i++)
    {
	string s;
	cin >> s;

	for (int i = 0; i < 10; i++)
	{
	    string pr = s.substr(0, i+1);
	    string su = s.substr(i+1, 10-i);
    
	    if (pre[su] == true && suf[pr] == true)
	    {
		cout << s << "\n";
		return 0;
	    }

	    pre[pr] = true;
	    suf[su] = true;
	    pre[su] = true;
	    suf[pr] = true;

	}

    }

    cout << "ok\n";

    return 0;
}

