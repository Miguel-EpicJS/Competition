#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    freopen("shell.in", "r", stdin);

    int n;

    cin >> n;

    vector<int> arr = {0, 1, 2};

    int ans[3] = {0, 0, 0};

    for (int i = 0; i < n; i++)
    {
	int x, y, z;
	cin >> x >> y >> z;
    
	x--;
	y--;
	z--;
    
	swap(arr[x], arr[y]);
	
	ans[arr[i]]++;

    }


    freopen("shell.out", "w", stdout);

    cout << *max_element(ans, ans+3);
    return 0;
}

