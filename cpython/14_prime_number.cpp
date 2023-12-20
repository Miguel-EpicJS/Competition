#include <bits/stdc++.h>

using namespace std;

int arr[500050] = {0};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;
 
    for (int i = 2; i <= n; i++)
    {
        for (int j = i * i; j <= n; j+=i)
        {
            arr[j - 1] = 1;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (arr[i - 1] == 0) cout << i << " ";
    }

    cout << "\n";

    return 0;
}

