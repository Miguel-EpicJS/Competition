#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int a, b;

    cin >> a >> b;

    int tot = 0;

    for (int i = a; i <= b; i++)
    {
	int sq = (sqrt(i));
	int cb = (cbrt(i));

	if ( sq*sq == i && cb * cb * cb == i )
	{
	    tot++;
	}
    }

    cout << tot;

    return 0;
}
