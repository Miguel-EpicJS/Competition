#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>

using namespace std;

string leftrotate(string str1, int n)
{
 
    string temp = str1 + str1;
    int l1 = str1.size();
 
    string Lfirst = temp.substr(n, l1);
 
    return Lfirst;
}

void solve()
{

    int n, k;

    cin >> n >> k;

    string a;

    cin >> a;

    string sTop, temp;
    int iTop = 0, mov = 0;
    int rep = n;

    for (int i = 0; i < n; i++)
    {
	temp = leftrotate(a, i);
	int val = stoi(temp, nullptr, 2);

	if (val > iTop)
	{
	    iTop = val;
	    sTop = temp; 
	    mov = i;
	}

	if (a.compare(temp) == 0 && i != 0)
	{
	    rep = 2;
	    break;
	}


    }

    cout << mov + (rep * (k-1)) << "\n";

}

int main() {
    int num;
    cin >> num; 

    while(num--)
    {
        solve();
    }

}
