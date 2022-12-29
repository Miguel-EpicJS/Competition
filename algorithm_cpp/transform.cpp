#include <iostream>
#include <vector>
#include <algorithm>

#include <bits/stdc++.h>


using namespace std;

int main(void)
{
    vector<int> v{1,2,3,4,5};

    transform(v.cbegin(), v.cend(), v.begin(), [](int x){ return x*x; });

    auto print = [](vector<int> x)
    {
	for (auto i: x)
	{
	    cout << i << " ";
	}
    };
    
    print(v);

    return 0;
}
