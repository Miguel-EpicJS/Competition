#include <iostream>
#include <vector>
#include <map>

using namespace std;
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(int i = 0; i < nums.size(); i++) {
            for(int j= i+1; j < nums.size(); j++) {
                if(nums.at(i) + nums.at(j) == target ) {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res;
    }
};
*/
// HashTable solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> table;
	int l = nums.size();
        for(int i = 0; i < l; i++) {
	    int ans = target - nums[i];
	    if(table.count(ans)) {
		return {table[ans], i};
	    }
	    table[nums[i]] = i;
	}
        return {};
    }
};


