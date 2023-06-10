#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int x, y, a;

    cin >> x >> y >> a;

    cout << ((x+a-1)/a) * ((y+a-1)/a)<<"\n";

    return 0;
}

