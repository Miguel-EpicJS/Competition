#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    int t1 = a*b + (a-1)*(b-1);

    int t2 = (a-1)*2 + (b-1)*2;

    cout << t1 << "\n";
    cout << t2 << "\n";

    return 0;
}

