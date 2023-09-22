#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c= 0;

    cin >> a >> b;

    for (int i = 1; i*i*i <= b; i++)
    {
	int n = i*i*i;
	if (n < a) continue;

	int k = sqrt(n);
	if (k*k == n)c++;
    }

    cout << c << "\n";

    return 0;
}

