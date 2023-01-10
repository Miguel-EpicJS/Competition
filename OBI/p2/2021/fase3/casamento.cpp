#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string n, m;

    cin >> n >> m;

    string zero = "0";

    while (n.length() < m.length())
    {
	n = zero + n;
    }

    while (m.length() < n.length())
    {
	m = zero + m;
    }

    string res1 = "", res2 = "";

    for (int i = 0; i < n.length(); i++)
    {
	if (n[i] < m[i])
	{
	    res2 += m[i];
	}
	else if (m[i] < n[i])
	{
	    res1 += n[i];
	}
	else if (m[i] == n[i])
	{
	    res1 += n[i];
	    res2 += m[i];
	}
    }

    int r1, r2;

    if (res1.length() == 0)
    {
	r1 = -1;
    }
    else
    {
	r1 = stoi(res1);
    }
    if (res2.length() == 0)
    {
	r2 = -1;
    }
    else
    {
	r2 = stoi(res2);
    }

    if (r1 < r2)
    {
	cout << r1 << " " << r2;
    }
    else 
    {
	cout << r2 << " " << r1;
    }

    return 0;
}
