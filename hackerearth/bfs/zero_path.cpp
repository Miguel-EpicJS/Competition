#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define tej ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ve vector < int >
#define vl vector < long long int >
#define pb push_back
#define fo(i, n) for (i = 0; i < n; i++)

void solve()

{

    ll n, c = 0, i, d, b;

    cin >> n;

    ll a[n + 1] = {
        0
    };

    ll ar[n + 1];

    for (i = 1; i < n; i++)

    {

        cin >> d >> b;

        a[d]++;

        a[b]++;

    }

    for (i = 1; i <= n; i++)

        cin >> ar[i];

    for (i = 1; i <= n; i++)

    {

        if (a[i] >= 2 && ar[i] == 0)

            a[i] = 0;

    }

    for (i = 1; i <= n; i++)

    {

        if (a[i] >= 2)

            c++;

    }

    cout << c << "\n";

}

int main()

{

    tej

    int t = 1;

    cin >> t;

    while (t--)

    {

        solve();

    }

    return 0;

}
