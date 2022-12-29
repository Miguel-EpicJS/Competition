#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

/* Testing the copy function and its variations from algorithm lib */

using namespace std;

int main(void)
{
 
    auto print = [](vector<int> v) 
    {
	for (auto i : v)
	{
	    cout << i << " ";
	}
	cout << endl;
    };

    vector<int> vec1(10), vec2, vec3(20), vec4;
    
    iota(vec1.begin(), vec1.end(), 0);

    copy(vec1.begin(), vec1.end(), back_inserter(vec2));

    copy_backward(vec1.begin(), vec1.end(), vec3.end());

    copy_if(vec1.begin(), vec1.end(), back_inserter(vec4), [](int x) { return x % 2 == 1; } );

    print(vec4);

    return 0;
}
