#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;

    cin >> t;

    while(t--)
    {
	int n;

	cin >> n;

	if (n == 1) cout << "1\n";
	else if (n == 2) cout << "2 1\n";
	else if (n == 3) cout << "2 1 3\n";
	else
	{
	    vector<int> ans(n, 0);
	    
	    ans[0] = 2;
	    ans[n-1] = 3;
	    ans[n/2] = 1;

	    int c = 4;
	    for (int i = 0; i < n; i++)
	    {
		if (ans[i] == 0) ans[i] = c++;
	    }
	    
	    for (auto i : ans)
	    {
		cout << i << " ";
	    }
	    cout << "\n";
	}
    }

    return 0;
}

