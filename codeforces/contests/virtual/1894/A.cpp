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
	string s;
	cin >> n >> s;
	cout << s[s.size()-1] << "\n";
    }

    return 0;
}

