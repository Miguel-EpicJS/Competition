class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> n1(nums1.begin(), nums1.end()), n2(nums2.begin(), nums2.end());
        set<int> s1;
        s1.insert(n2.begin(), n2.end());
        s1.insert(n1.begin(), n1.end());
        
        vector<vector<int>> res(2);

        for (auto i : s1)
        {
            if (n1.find(i) != n1.end() && n2.find(i) == n2.end())
            {
                res[0].push_back(i);
            }
            else if (n2.find(i) != n2.end() && n1.find(i) == n1.end())
            {
                res[1].push_back(i);
            }
        }
        return res;
    }
};
