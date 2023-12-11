class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int ,int> freq;

        for (auto i : arr) freq[i]++;

        for (auto i : freq)
        {
            if (i.second > arr.size()/4) return i.first;
        }
        return arr[0];
    }
};
