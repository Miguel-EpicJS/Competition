#include <iostream>
#include <vector>
#include <stack>

using namespace std;
int main() {
    int n;
    cin >> n;

    vector<long long> heights;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
	if (i == 0)
	{
	    heights.push_back(x);
	    continue;
	}
        if (x > heights[i-1])
        {
            heights.push_back(x);
        }
    }

    n = heights.size();

    vector<int> tots;

    int m = 0;

    for (int i = 0; i < n; i++)
    {
	int val = 0;
        for (int j = i; j < n; j++)
	{
	    val ^= heights[j];
	}
	if (val > m)
	    m = val;
	tots.push_back(val);
    }        

    cout << m << "\n";

}
