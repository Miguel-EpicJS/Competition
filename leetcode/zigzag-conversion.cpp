class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
        {
            return s;
        }
        if (numRows == 2)
        {
            string r = "";
            for (int i =0; i < s.size(); i+=2)
            {
                r += s[i];
            }
            for (int i =1; i < s.size(); i+=2)
            {
                r += s[i];
            }
            return r;
        }

        vector<string> levels(numRows, "");
        int crrLvl = 0;
        int mdf = 1;
        for (int i = 0; i < s.size(); i++)
        {
            levels[crrLvl] += s[i];
            crrLvl += mdf;
            if (crrLvl == numRows)
            {
                mdf = -1;
                crrLvl -= 2;
            }
            else if (crrLvl == 0)
            {
                mdf = 1;
            }
        }
        string r = "";
        for (auto i : levels)
        {
            r+=i;
        }
        return r;
    }
};
