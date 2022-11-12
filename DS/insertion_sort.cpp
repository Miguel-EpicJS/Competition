#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> arr = {5, 2, 4, 6, 1, 3};
    int key;
    for (int j = 1; j < arr.size(); j++) {
	key = arr[j];
	int i = j - 1;
	while ( i >= 0 && arr[i] > key) {
	    arr[i+1] = arr[i];
	    i = i - 1;
	}
	arr[i+1] = key;
    }

    for(int i = 0; i < arr.size(); i++) {
	cout << arr[i] << " ";
    }

    return 0;
}

