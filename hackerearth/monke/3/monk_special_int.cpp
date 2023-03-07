#include <iostream>
#include <vector>
using namespace std;

bool checkSubarrays(vector<int> A, int K, int X) {
    // Check if there exists a subarray of size K with a sum greater than X.
    int prefix_sum = 0;
    for (int i = 0; i < K; i++) {
        prefix_sum += A[i];
    }
    if (prefix_sum > X) {
        return true;
    }
    for (int i = K; i < A.size(); i++) {
        prefix_sum += A[i] - A[i-K];
        if (prefix_sum > X) {
            return true;
        }
    }
    return false;
}

int findMaxSpecialInteger(vector<int> A, int X) {
    // Find the maximum value of special integer K for array A and threshold X.
    int lo = 1, hi = A.size();
    while (lo < hi) {
        int mid = (lo + hi + 1) / 2;
        if (checkSubarrays(A, mid, X)) {
            lo = mid;
        } else {
            hi = mid - 1;
        }
    }
    return lo;
}

int main() {
    // Example usage:
    vector<int> A = {1, 2, 3, 4};
    int X = 6;
    int maxK = findMaxSpecialInteger(A, X);
    cout << "Maximum special integer K: " << maxK << endl;
    return 0;
}
