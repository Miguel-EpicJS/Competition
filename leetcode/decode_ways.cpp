class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n+1, -1);
        dp[n] = 1;
        return s.empty() ? 0 : f(0, s, dp);
    }


    int f (int p, string& s, vector<int> &dp)
    {
        if(dp[p] > -1) return dp[p];
        if (s[p] == '0') return dp[p] = 0;
        int res = f(p+1, s, dp);
        if (p < s.size()-1 && (s[p]=='1' || (s[p] == '2' && s[p+1] < '7'))) res += f(p+2, s, dp);
        return dp[p] = res;
    }

};
