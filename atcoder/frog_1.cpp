#include <bits/stdc++.h>

using namespace std;

int arr[100001];

int solve(int i, int n)
{
    if (i == n) return 0;
    if (i > n) return 100000;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
	cin >> arr[i];
    }



    return 0;
}

