#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    int s=0, c=0;

    cin >> n;

    while(n--)
    {
	int x;
	cin >> x;
	if (x < 50) s++;
	else if (x < 85) c++;
    }

    cout << s << " " << c << "\n";

    return 0;
}

