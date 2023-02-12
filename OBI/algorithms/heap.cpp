#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void printVector(vector<int> v)
{
    for (auto i : v)
    {
	cout << i << " ";
    }
    cout << "\n";
}

int main()
{

    vector<int> v1 = {20, 30, 40, 25, 15};

    printVector(v1);

    make_heap(v1.begin(), v1.end());

    printVector(v1);

    return 0;
}


