class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a="", b="";
        for (auto i : word1) a+=i;
        for (auto i : word2) b+=i;

        return a == b;
    }
};
