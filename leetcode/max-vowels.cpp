#include <algorithm>

class Solution {
public:

    bool isvowel(char a)
    {
        return (a=='a') || (a=='e') || (a=='i') || (a=='o') || (a=='u'); 
    }

    int countVowels(string str)
    {
        int r = 0;
        for (auto i : str)
        {
            if (isvowel(i))
            {
                r++;
            }
        }

        return r;
    }

    int maxVowels(string s, int k) {
        int maxV = countVowels(s.substr(0, k));
        int curr = maxV;
        cout << s.substr(0, k) << "\n";
        for (int i = 1; i <= s.size()-k; i++)
        {

            if (isvowel(s[i-1]))
            {
                curr--;
            }
            if (isvowel(s[i+k-1]))
            {
                curr++;
            }
            maxV = max(maxV, curr);
        }

        return maxV;
    }
};
