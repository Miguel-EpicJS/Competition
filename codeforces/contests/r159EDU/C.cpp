#include <bits/stdc++.h>

using namespace std;

//https://www.geeksforgeeks.org/gcd-two-array-numbers/
long long gcd(long long a, long long b) 
{ 
    if (a == 0) 
	return b; 
    return gcd(b % a, a); 
} 

long long findGCD(vector<long long> &arr, long long n) 
{ 
    int result = arr[0]; 
    for (int i = 1; i < n; i++) 
    { 
	result = gcd(arr[i], result); 
  
	if(result == 1) 
	{ 
	    return 1; 
	} 
    } 
    return result; 
}
  

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while (t--)
    {
	long long n;

	cin >> n;

	vector<long long> arr;

	long long m = 0;

	for (int i = 0; i < n; i++)
	{
	    long long x;
	    cin >> x;
	    arr.push_back(x);
	    m = max(x, m);
	}
    
	long long g = 0, ans = 0;

	sort(arr.begin(), arr.end());
	

	vector<long long> diffs;
	
	if (arr.size() == 1) arr.push_back(arr.back()+1);

	for (int i = 1; i < arr.size(); i++)
	{
	    diffs.push_back(arr[i] - arr[i-1]);	    
	}

	g = findGCD(diffs, diffs.size());

	long long nw = arr.back()+g;
	if ()
	{

	}
	
	for (auto i : arr)
	{
	    ans += (nw-i)/g;
	}

	cout << ans << "\n";

    }

    return 0;
}

