#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    string ans = "";

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
	char a;
	cin >> a;
	ans += a;
	if (a == '0' || a == '5') cnt++;
    }

    if (cnt == 0)
    {
	cout << "-1\n";
	return 0;
    }



	
    return 0;
}

