#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int d, a, n;

    cin >> d >> a >> n;

    int m = min(15, n)-1;

    cout << (32-n)*(d + m*a) << "\n";


    return 0;
}

