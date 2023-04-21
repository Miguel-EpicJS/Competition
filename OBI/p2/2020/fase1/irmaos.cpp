#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[2];

    cin >> arr[0] >> arr[1];

    sort(arr, arr+2);

    cout << arr[1] - arr[0] + arr[1] << "\n";

    return 0;
}

