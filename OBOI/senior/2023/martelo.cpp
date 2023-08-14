#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    int tot = 0;

    int a1 = a, b1 = b;

    int curr = min(a/6, b);

    while(a > 0)
    {
	a -= 1;
	b += 4;
	curr = max(curr, min(a/6, b));
    }
    while(b > 0)
    {
	a += 1;
	b -= 4;
	curr = max(curr, min(a/6, b));
    }


    cout << curr << "\n";

    return 0;
}

