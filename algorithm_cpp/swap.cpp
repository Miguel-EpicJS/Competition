#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int a = 5, b = 3;

    vector<char> v = { 'a', 'b', 'c', 'd', 'e' };
    vector<char> v2 = { '1', '2', '3', '4', '5' };

    swap(a, b);

    swap_ranges(v.begin(), v.begin()+ 3, v2.begin());

    auto print = [](int x, int y)
    { 
	cout << x << " " << y; 
    };

    auto printV = [](vector<char> v)
    {
	for(auto i: v)
	{
	    cout << i << " ";
	}
    };

    printV(v);

    return 0;
}
