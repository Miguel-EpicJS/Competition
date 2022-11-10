#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> arr, int el) {

    int mid, low, high;
    low = 0;
    high = arr.size();

    while( low != high) {
	mid = (low+high)/2;
	if(el == arr[mid]) {
	    return mid;
	} else if (el > arr[mid]) {
	    low = mid + 1;
	} else {
	    high = mid - 1;
	}
    }

    return -1;

}

int main() {

    vector<int> myarr = {-5, -2, 0, 3, 5, 7, 9, 12};

    int x;
    cin >> x;

    cout << search(myarr, x) << "\n";

    return 0;
}


