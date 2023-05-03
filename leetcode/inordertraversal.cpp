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
    void dfs(TreeNode* node, vector<int> &arr)
    {
        if (node == nullptr)
        {
            return;
        }
        dfs(node->left, arr);
        arr.push_back(node->val);
        
        dfs(node->right, arr);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> a;
        dfs(root, a);
        return a;
    }
};
