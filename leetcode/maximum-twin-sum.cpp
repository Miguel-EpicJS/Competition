/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> a;
        while(head != nullptr)
        {
            a.push_back(head->val);
            head = head->next;
        }
        int n = a.size();
        int mV = 0;
        for (int i = 0; i < n/2; i++)
        {
            a[i] += a[n-i-1];
            mV = max(a[i], mV);
        }

        return mV;
        
    }
};
