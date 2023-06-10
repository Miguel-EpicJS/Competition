#include <iostream>

using namespace std;

int main() {
	int waterMelon, p1, p2;
	bool ok = false;
	cin >> waterMelon;
	
	p1 = p2 = waterMelon / 2;
 
	if(waterMelon % 2 == 1) {
	    cout << "NO\n";
	    ok = true;
	} else if(waterMelon / 2 % 2 == 0)
	{
		cout << "YES" << endl;
		ok = true;
	}
	else if(waterMelon % 2 == 0)
	{
		while(p1 > 1)
		{
			p1--;
			p2++;
			if(p1%2 == 0 && p2 % 2 ==0)
			{
				cout << "YES" <<endl;
				ok = true;
				break;
			}
		}
	}
 
	if(!ok)
	{
		cout << "NO" << endl;
	}
 
	return 0;
}
