#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while(t--)
    {
	long long n;

	cin >> n;

	long long i = 1;
	int m = 0;
    
	while (n % i == 0)
	{
	    m = i;
	    i++;
	}

	cout << m << "\n";

    }

    return 0;
}

