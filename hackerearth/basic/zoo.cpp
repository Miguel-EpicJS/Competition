#include <iostream>
using namespace std;
int main() {
	string num;

	cin >> num;
	int x = 0, y = 0;
	for (int i = 0; i < num.size(); i++)
	{
		if (num[i] == 'z')
			x++;
		else
			y++;
	}

	string ans = (2 * x == y ? "Yes" : "No");

	cout << ans << "\n";
}
