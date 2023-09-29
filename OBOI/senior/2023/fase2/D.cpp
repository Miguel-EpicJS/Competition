#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;

    cin >> n >> k;

    vector<int> perm(n), sub(n);

    for (int i = 0; i < n; i++)
    {
	cin >> perm[i];
	sub[i] = i+1;
    }

    long long curr = 0, a = 0, b = 0;

    for (int i = 0; i < n; i++)
    {
	curr += abs(sub[i] - perm[i]);
    }

    if (curr == k)
    {
	cout << "S\n";
	return 0;
    }

         

    return 0;
}

