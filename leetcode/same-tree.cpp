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
void inorderTraversal(TreeNode* root, vector<long long int> &arr, int modf) {
    if (root == nullptr)
    {
        arr.push_back(-1 * modf);
        cout << arr.back() << " ";
        return;
    }
    inorderTraversal(root->left, arr, 2);
    arr.push_back(root->val * modf);
    cout << arr.back() << " ";
    inorderTraversal(root->right, arr, 3);
}
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<long long int> pa, qa;
        inorderTraversal(p,pa, 1);
        cout << "\n";
        inorderTraversal(q, qa, 1);   
        return pa==qa;     
    }
};
