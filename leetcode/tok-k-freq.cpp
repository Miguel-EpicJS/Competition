class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;

        for (auto i : nums)
        {
            m[i]++;
        }

        vector<pair<int, int>> s;
        for (auto i : m)
        {
            s.push_back({i.second, i.first});
        }

        sort(s.rbegin(), s.rend());
        vector<int> a;
        for (int i = 0;  i < k; i++)
        {
            a.push_back(s[i].second);
        }

        return a;
    }
};
