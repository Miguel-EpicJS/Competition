class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL)
            return NULL;
        if(head->next == NULL)
            return head;
        
        ListNode* next = head->next;
        head->next = swapPairs(next->next);
        next->next = head;
        
        return next;
    }
};

// https://leetcode.com/problems/swap-nodes-in-pairs/solutions/11271/simple-implementation-with-c/?orderBy=most_votes
