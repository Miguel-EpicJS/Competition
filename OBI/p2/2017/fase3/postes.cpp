#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    int a, b=0, c=0;

    while(n--)
    {
	int x;
	cin >> x;
	if (x < 50) b++;
	else if (x < 85) c++;
    }

    cout << b << " " << c << "\n";

    return 0;
}

