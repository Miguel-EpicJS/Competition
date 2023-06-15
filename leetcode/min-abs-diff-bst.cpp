/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void inOrder(TreeNode* node, vector<int> &arr)
    {
        if (node == NULL)
            return;

        inOrder(node->left, arr);
        arr.push_back(node->val);
        inOrder(node->right, arr);
    }

    int getMinimumDifference(TreeNode* root) {
        vector<int> ans;
        inOrder(root, ans);

        int m = 999999999;
        for (int i = 1; i < ans.size();i++)
        {
            m = min(m, ans[i]-ans[i-1]);
        }

        return m;
    }
};
