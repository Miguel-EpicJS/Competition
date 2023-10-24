#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
	int n;
        string binary;
        cin >> n >> binary;
        
        int operations = 0;
        int ones_count = 0;
        
        for (int j = binary.size() - 1; j >= 0; j--) {
            if (binary[j] == '1') {
                if (j < i) {
                    cout << "-1\n";
                    break;
                } else {
                    ones_count++;
                }
            }
        }
        
        if (ones_count > 0) {
            cout << ones_count << " ";
        }
    }

    return 0;
}
