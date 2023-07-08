#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<int> vals(n+1);
	
    for (int i = 1; i <= n; i++)
    {
	cin >> vals[i];
    }

    vals[0] = 0;

    stack<pair<int, int>> s;
    
    s.push({0,0});

    for (int i = 1; i <= n; i++)
    {
	while(s.top().first >= vals[i])
	{
	    s.pop();
	}
	cout << s.top().second << " ";
	s.push({vals[i], i});
    }
    return 0;
}

