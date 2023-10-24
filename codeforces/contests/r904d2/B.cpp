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

	int n;
	string b;

	cin >> n >> b;

	int ons = 0, zrs = b.size();

	set<int> zp, op;

	for (auto i : b) ons += (i-'0'), zrs -= (i-'0');

    
	if (ons == b.size())
	{
	    for (int i = 0; i < b.size(); i++)
	    {
		cout << "-1 ";

	    }
	}
	else
	{
	    long long arr[b.size()+1];
	    arr[0] = 0;
	    reverse(b.begin(), b.end());
	    for (int i = 0; i < b.size(); i++)
	    {
		if (b[i]=='0')zp.insert(i);
		else op.insert(i);

		arr[i] = b[i]-'0';
		if (i>0)arr[i] += arr[i-1];
	    }

	    long long count = 0;
	   
	    for (auto i : zp)
	    {
		count += arr[i];
		cout << count << " ";
	    }

	    for (int i = 0; i < ons; i++) cout << "-1 ";
	}
	

	cout << "\n";
    }

    return 0;
}

