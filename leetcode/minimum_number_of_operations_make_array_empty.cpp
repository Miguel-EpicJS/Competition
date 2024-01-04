class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int, int> freq;

        for (auto i : nums) freq[i]=0;
        for (auto i : nums) freq[i]++;

        bool ok = true;

        int ans = 0;

        for (auto i : freq)
        {
            if (i.second == 1){ ok = false; break;}
            else if (i.second % 3 == 0) ans += i.second/3;
            else ans += i.second/3 + 1;
        }       

        if (ok) return ans;
        else return -1; 
        
    }
};
