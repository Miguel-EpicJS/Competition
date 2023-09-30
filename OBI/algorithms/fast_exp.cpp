#include <bits/stdc++.h>

using namespace std;

int exp(int x, int n)
{
    if (n==0) return 1;
    int t = exp(x, n/2);
    if (n%2 == 1) return a*t*t;

    return t*t;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    return 0;
}

