#include <bits/stdc++.h>

using namespace std;

int sumOfD(int number) {
    int sum = 0;

    while (number > 0) {
        sum += number % 10; 
        number /= 10;       
    }

    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while(t--)
    {

	int n;
	int k;

	cin >> n >> k;

	int l = 0;

	while(sumOfD(n) % k != 0)
	{
	    n++;
	}

	cout << n << "\n";

    }

    return 0;
}

