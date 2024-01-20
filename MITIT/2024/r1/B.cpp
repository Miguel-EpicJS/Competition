#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<long long> arr;


    for (int i = 0; i < n; i++)
    {
	long long x;
	cin >> x;

	arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    deque<long long> dq(arr.begin(), arr.end());

    int i = 0;

    while(dq.size() > 1)
    {
	if (i % 2 == 0)
	{
	    dq.pop_front();
	}
	else
	{
	    dq.pop_back();
	}
	i++;
    }
   
    cout << dq.back() << "\n";

    return 0;
}

