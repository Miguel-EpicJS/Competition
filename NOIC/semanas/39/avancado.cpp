#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    int count = 0;

    int prev = 9999999;

    while(n--)
    {
	int x;
	cin >> x;
	cout << count << " ";
	if (x <= prev) count++;
	else count = 1;

    }

    return 0;
}

