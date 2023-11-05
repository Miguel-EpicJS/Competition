class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if (k >= arr.size()) return *max_element(arr.begin(), arr.end());

        int curr = arr[0];
        int rec = 0;
        for (int i = 1; i < arr.size(); i++)
        {
            if (rec == k) break;
            if (arr[i] > curr) rec = 1, arr.push_back(curr), curr=arr[i];
            else rec++;
        }

        return curr;
    }
};
