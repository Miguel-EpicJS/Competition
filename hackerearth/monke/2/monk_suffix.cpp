#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    string  s;
    int k;
    cin >> s >> k;

    vector<string> original, sorted;

    original.push_back(s);

    for (int i = 1; i < s.size(); i++)
    {
        string val = "";
        for (int j = i; j < s.size(); j++)
        {
	    val += s[j];
        }
	original.push_back(val);
    }
    k -= 1;

    sorted = original;

    sort(sorted.begin(), sorted.end());

    cout << sorted[k];

}
