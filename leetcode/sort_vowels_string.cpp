class Solution {
public:
    int isVowel(char ch)
    {
        string str = "aeiouAEIOU";
        return (str.find(ch) != string::npos);
    }

    string sortVowels(string s) {
        map<char, int> cnt;
        for (auto i : s)
        {
            if (isVowel(i))
            {
                cnt[i]++;
            }
        }

        vector<char> perm;

        for (auto i : cnt)
        {
            for (int j = 0; j < i.second; j++)
            {
                perm.push_back(i.first);
            }
        }

        int c = 0;
        for (auto &i : s)
        {
            if (isVowel(i))
            {
                i = perm[c];
                c++;
            }
        }
        return s;
    }
};
