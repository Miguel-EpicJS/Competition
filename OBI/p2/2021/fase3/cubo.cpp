#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int a, b;

    cin >> a >> b;

    int tot = 0;

    int rc = int(pow(a, 1.0/3.0));

    int cb = rc * rc * rc;

    if (cb < a)
    {
	rc++;
	cb = rc*rc*rc;
    }

    while (cb <= b)
    {
	int sq = int(sqrt(cb));
	int qd = sq * sq;

	if ( qd == cb )
	{
	    tot++;
	}

	rc++;
	cb = rc*rc*rc;
    }

    cout << tot;

    return 0;
}
