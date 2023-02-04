#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int mod = 1000000007;

long long int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
long long int findGCD(vector<int> arr, int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
        result = gcd(arr[i], result);
 
    return result;
}

long long int multiply(vector<int> arr)
{
	long long int tot = 1;
	for (auto i : arr)
	{
		tot *= i;
	}

	return tot;
}

int main() {
	int num;
	cin >> num;    
	vector<int> val;
	for (int i = 0; i < num; i++)
	{
		int x;
		cin >> x;
		val.push_back(x);
	}
	
	long long int resGcd = findGCD(val, num);
	long long int resMul = multiply(val);

	cout << (long long int)(pow(resMul,resGcd)) % 1000000007;

}

