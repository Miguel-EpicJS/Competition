#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
    }
    
    int k;
    cin >> k;

    int i = 0, j = n-1;

    while (true)
    {
	if (arr[i] + arr[j] == k) break;

	if (arr[i] + arr[j] > k) j--;
	else i++;
    }

    cout << i+1 << " " << j + 1 << "\n";

    return 0;
}

