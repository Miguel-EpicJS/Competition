#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string s;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
	cin >> s;
	stack<char> q;
	for (auto j : s)
	{
	    if (j == '{' || j == '(' || j == '[')
	    {
		q.push(j);
	    }
	    else
	    {
		if (q.size() == 0) q.push(j);
		char c = q.top();
		if ((c == '{' && j == '}') || (c == '(' && j == ')') || (c == '[' && j == ']'))
		{
		    q.pop();
		}
		else
		{
		    q.push(j);
		}
	    }
	}
	if (q.size() > 0) cout << "N\n";
	else cout << "S\n";
    }

    return 0;
}

