class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>m;
        int sum=0;
        for(auto i:s)
            m[i]++;
        for(auto i:t)
            m[i]--;
        for(auto i:m){
            if(i.second<0)
                sum += i.second;
        }
        return abs(sum);
    }
};

//https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/?envType=daily-question&envId=2024-01-13
