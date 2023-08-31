#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main() {
    
    int N;
    
    cin >> N;
    vector<int> nums(N);
    
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    
    vector<int> DP(N, 0);
    
    DP[1] = abs(nums[1] - nums[0]);
    
    for (int i = 2; i < N; i++) {
        DP[i] = min((DP[i - 1] + abs(nums[i] - nums[i - 1])), (DP[i - 2] + abs(nums[i] - nums[i - 2])));
        
    }

    cout << DP[N-1] << endl;
}
