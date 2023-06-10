#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    string lines[n];

    for(int i =0; i < n; i++) {
	cin >> lines[i];
	if(lines[i].size() > 10) {
	    cout << lines[i][0] << lines[i].size()-2 << lines[i][lines[i].size()-1] << "\n";
	} else {
	    cout << lines[i] << "\n";
	}
    }

    return 0;
}
