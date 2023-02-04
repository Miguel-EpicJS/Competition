#include <iostream>
using namespace std;

int F(int x, int y)
{

    if (x == 0)
    {
	return y+1;
    }
    
    else if (x > 0 && y == 0)
    {
    	return F(x-1, 1);
    }
    
    else if (x > 0 && y > 0)
    {
    	return F(x-1, F(x, y-1));
    }

    return 0;

}

int main() {
    int x, y;
    cin >> x >> y;
    int r = F(x, y);
    r = r % 1000;
    if (r < 10)
    {
	cout << "00" << r;
    }
    else if (r < 100)
    {
	cout << "0" << r;
    }
    else
    {
	cout << r;
    }
}
