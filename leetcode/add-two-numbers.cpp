#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

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
    void push(ListNode** head_ref, int new_data) 
    {   
        ListNode* new_node = new ListNode(); 
        new_node->val = new_data; 
        new_node->next = (*head_ref); 
        (*head_ref) = new_node; 
    } 
    string doSum(string a, string b)
    {
        if(a.size() < b.size())
            swap(a, b);

        int j = a.size()-1;
        for(int i=b.size()-1; i>=0; i--, j--)
            a[j]+=(b[i]-'0');

        for(int i=a.size()-1; i>0; i--)
        {
            if(a[i] > '9')
            {
                int d = a[i]-'0';
                a[i-1] = ((a[i-1]-'0') + d/10) + '0';
                a[i] = (d%10)+'0';
            }
        }
        if(a[0] > '9')
        {
            string k;
            k+=a[0];
            a[0] = ((a[0]-'0')%10)+'0';
            k[0] = ((k[0]-'0')/10)+'0';
            a = k+a;
        }
        return a;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string list1, list2;
        ListNode* curr = l1;
        while (curr != nullptr)
        {
            list1 += to_string(curr->val);
            curr = curr->next;
        }
        curr = l2;
        while (curr != nullptr)
        {
            list2 += to_string(curr->val);
            curr = curr->next;
        }

        reverse(list1.begin(), list1.end());
        reverse(list2.begin(), list2.end());
        
        string tot = doSum(list1, list2);

        ListNode* end = NULL;

        for (int i = 0; i < tot.size(); i++)
        {
            push(&end, tot[i] - '0');
        }

        return end;
    }
};







