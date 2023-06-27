#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    long long n;
 
    cin >> n;
 
    long long ans = n*(n+1)/2;
 
    if (ans% 2 == 1)
    {
	cout << "NO\n";
	return 0;
    }
 
    cout << "YES\n";
 
    ans = ans/2;
 
    vector<int> s1, s2;
 
    for (int i = n; i >= 0; i--)
    {
	 if (i <= ans && i != 0)
	 {
	     s1.push_back(i);
	     ans -= i;
	 }
	 else if (i != 0)
	 {
	     s2.push_back(i);
	 }
    }
 
    cout << s1.size() << "\n";
 
    for (int i = s1.size(); i >= 0; i--)
    {
	if (s1[i] == 0) continue;
	cout << s1[i] << " ";
    }
    cout << "\n";
    cout << s2.size() << "\n";
    for (int i = s2.size(); i >= 0; i--)
    {
	if (s2[i] == 0) continue;
	cout << s2[i] << " ";
    }
    cout << "\n";
 
    return 0;
}
