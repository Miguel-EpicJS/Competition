#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> a = {5, 234,1021, 129, 02, 934, 58, 5, 5};

    set<int> b(a.begin(), a.end());

    vector<int> c(b.begin(), b.end());

    for (auto x : c)
    {
	cout << x << ", ";
    }

    return 0;
}

