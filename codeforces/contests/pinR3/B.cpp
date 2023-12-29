#include <bits/stdc++.h>

using namespace std;

//https://www.geeksforgeeks.org/cpp-program-for-gcd-of-more-than-two-or-array-numbers/
long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
// Function to find gcd of array of
// numbers
long long findGCD(vector<long long> &arr)
{
    long long n = arr.size();
    long long result = arr[0];
    for (int i = 1; i < n; i++)
        result = gcd(arr[i], result);
 
    return result;
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

	long long a, b=0, c=0, n, m, k;

	cin >> n;

	vector<long long> arr, diff;


	for (int i = 0; i < n; i++)
	{
	    cin >> a;
	    arr.push_back(a);
    
	    if (a%2==0) b++;
	    if (a%2==1) c++;

	}

	sort(arr.begin(), arr.end());

	for(int i = 1; i < n; i++)
	{
	    diff.push_back(arr[i] - arr[i-1]);
	}

	k = findGCD(diff);

	cout << k * 2 << "\n";

    }

    return 0;
}

