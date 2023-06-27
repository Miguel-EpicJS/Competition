#include <bits/stdc++.h>

using namespace std;

int arr[30];

long long m = 99999999999;

void solve(int n, long long w1, long long w2, int i)
{
    if (i >= n) return;
    if (w2 < 0) return;

    m = min(m, abs(w1-w2));

    solve(n, w1 + arr[i], w2 - arr[i], i+1); // get 
    solve(n, w1, w2, i+1);                   //dont

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    long long p = 0;

    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
	p+=arr[i];
    }

    solve(n, 0, p, 0);

    cout << m << "\n";

    return 0;
}

