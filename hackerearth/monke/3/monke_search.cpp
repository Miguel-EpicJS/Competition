#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;   

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;

    cin >> m;

    sort(a, a+n);

    while (m--)
    {
        int x, y;
        cin >> x >> y;

        if (x == 0)
        {
            int i;
            for (i = 0; i < n && a[i] < y; i++){}
            cout << n-i << "\n";
        }
        else
        {
            int i;
            for (i = 0; i < n && a[i] <= y; i++){}
            cout << n-i << "\n";    
        }
    }

    return 0;
}

