#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, x;

    cin >> n >> x;

    vector<int> array(n);

    for (int i = 0; i < n; ++i)
    {
	cin >> array[i];
    }

    long long sum = 0;

    int i = 0, j = 0, tot = 0;

    while (i < n)
    {
	sum += array[i];
	while (sum >= x)
	{
	    if (sum == x) tot++;
	    sum -= array[j];
	    j++;
	}
	i++;
    }

    cout << tot << "\n";

    return 0;
}

