#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<int> books;

    long long sum = 0, m = 0;

    for(int i = 0; i < n; i++)
    {
	long long x;
	cin >> x;
	sum += x;
	m = max(x, m);
    }


    long long f1 = m * 2;

    cout << max(f1, sum) << "\n";

    return 0;
}

