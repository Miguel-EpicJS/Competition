#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin >> n;

    vector<long long> a;

    for (long long i = 0; i < n; i++)
    {
        long long x, y;
        cin >> x >> y;
        a.push_back(x*x+y*y);
    }

    sort(a.begin(), a.end());

    long long m;
    cin >> m;

    long long k = m;

    while(m--)
    {
        long long x;
        cin >> x;
        long long tot = upper_bound(a.begin(), a.end(), x*x) - a.begin();

        cout << tot << "\n";
    }

    return 0;
}

