#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;

    cin >> n;


    if (n == 0 || n == 1)
    {
	cout << "1\n";
    }
    else
    {
	vector<int> fib(n+1);
	fib.at(0) = 1;
        fib.at(1) = 1;

	for(int i = 2; i < n+1; i++)
        {
	    fib.at(i) = fib.at(i-1) + fib.at(i-2);
	}

	cout << fib.at(n) << "\n";

    }

}
