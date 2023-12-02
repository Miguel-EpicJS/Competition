class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char, int> freq1;
        for (auto i : chars) freq1[i]++;
        long long ans = 0;
        string letts = "abcdefghijklmnopqrstuvwxyz";
        for (auto i : words)
        {
            map<char, int> freq2;

            for (auto j : i)
            {
                freq2[j]++;
            }
            bool ok = true;
            
            for (auto j : letts)
            {
                if (freq2[j] > freq1[j]) ok = false;
            }
            if (ok) ans += i.size();
        }

        return ans;
    }
};
