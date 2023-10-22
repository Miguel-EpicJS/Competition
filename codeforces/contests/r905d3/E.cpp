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
 
	vector<long double> a;
 
	for (int i = 0; i < n; i++)
	{
	    long long x;
	    cin >> x;
	    a.push_back(log2(x));
	}
	
	long long tot = 0;
	for (int i = 1; i < n; i++)
	{
	    if (a[i] < a[i-1]) {
		tot +=ceil(a[i-1]-a[i]);
		a[i] += ceil(a[i-1]-a[i]);
	    }
	}

 
	cout << tot << "\n";
 
    }
 
    return 0;
}
 
