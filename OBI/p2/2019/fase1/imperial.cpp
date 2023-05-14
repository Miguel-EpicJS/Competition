#include <bits/stdc++.h>
using namespace std;

int longest_alternating_subsequence(vector<int>& nums) {
    int n = nums.size();
    if (n < 2) {
        return n;
    }
    
    int ans = 1;
    int last1 = nums[0], last2 = nums[0], len = 1;
    
    for (int i = 1; i < n; i++) {
        if (nums[i] != last1 && nums[i] != last2) {
            len++;
            ans = max(ans, len);
            last2 = last1;
            last1 = nums[i];
        } else {
            len = 1;
            if (nums[i] == last1) {
                last2 = last1;
            }
            last1 = nums[i];
        }
    }
    
    return ans;
}

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;
	arr.push_back(x);
    }
    cout << longest_alternating_subsequence(arr); 
    return 0;
}
