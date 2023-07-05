#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> arr;

    int n, x, target;

    cin >> n >> target;
    while(n--)
    {
	cin >> x;
	arr.push_back(x);
    }

    sort(arr.begin(), arr.end());


    n = arr.size();    
    int low = 0, mid, high = n-1;

    while (low <= high)
    {
	mid = (low + high)/2;
	if(arr[mid] == target)
	{
	    cout << "Found at: " << mid << " (sorted)\n";
	    return 0;
	}

	if (arr[mid] > target) high = mid-1;
	else low = mid+1;
    }

    cout << "Not found\n";

    return 0;
}

