#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>

using namespace std;
int main() {
    int num;
    cin >> num; 
    
    vector<string> arr;

    for (int i = 0; i < num; i++)
    {
        string s;
        cin >> s;
	int tot = 0;
    	for (auto a : arr)
	{
	    if (lexicographical_compare(a.begin(), a.end(), s.begin(), s.end()))
	    {
		tot++;
	    }
	}


        arr.push_back(s);


	cout << tot << "\n";
    }
}
