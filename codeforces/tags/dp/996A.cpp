#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;

    cin >> n;

    long long tot = 0;

    vector<int> notes = {100, 20, 10, 5, 1};

    long long x = 0;

    for (auto i : notes)
    {
	x = n / i;
	tot += x;
	n -= x * i;
    }

    cout << tot << "\n";

    return 0;
}

