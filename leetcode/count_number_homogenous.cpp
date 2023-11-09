class Solution {
public:
    int countHomogenous(string s) {
        long long ans = 0;
        s.push_back('.');
        char b = s[0];
        long long ss = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == b) ss++;
            else
            {
                ans = (ans + ((ss*(ss+1))/2))%(1000000007);
                b = s[i];
                ss = 1;
            }
        }

        return ans;
    }
};
