#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cin >> n;
    
    if (n < 149)
    {
        cout << "99\n";
    }
    else if (n < 1000)
    {
	if (n % 100 == 49)
	{
	    cout << (n ) + 50;
	}
	else if (n % 100 > 49)
	{
	    cout << n + (99 - n % 100);
	}
	else
	{
	    cout << n + (99 - n % 100) - 100;
	}
    }
    else if (n < 10000)
    {
	if (n % 100 == 99)
	{
	    cout << n;
	}
	else if (n % 100 > 49)
	{
	    cout << n + (99 - n % 100);
	}
	else
	{
	    cout << n + (99 - n % 100) - 100;
	}

    }
    else
    {
        cout << "9999\n";
    }
    
    return 0;
}
