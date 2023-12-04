class Solution {
public:
    string largestGoodInteger(string num) {
        int ans = -1;
        for (int i = 0; i < num.size()-2; i++)
        {
            if (num[i] == num[i+1] && num[i+1] == num[i+2])
            {
                ans = max(num[i]-'0', ans);
            }
        }

        string res = "";
        if (ans != -1)
        {
            for (int i = 0; i < 3; i++) res += (ans+'0');
        }

        return res;
    }
};
