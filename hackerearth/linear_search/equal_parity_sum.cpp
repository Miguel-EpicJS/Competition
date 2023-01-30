#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    int inverseArr[n];

    int oddSum = 0;
    int evenSum = 0;

    int inverseOddSum = 0;
    int inverseEvenSum = 0;

    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
	inverseArr[i] = arr[i] * -1;
    }


    cout << inverseOddSum << "\n";
    cout << inverseEvenSum << "\n";

    if (oddSum == evenSum || inverseOddSum == inverseEvenSum)
    {
	cout << "YES\n";
    }
    else
    {
	cout << "NO\n";
    }

}

int main()
{
    int t;
    cin >> t;
    while (t--)
	solve();

    return 0;
}

