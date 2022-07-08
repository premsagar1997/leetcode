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
    vector<int> v;
    vector<int> postorderTraversal(TreeNode* root) {
        postOrder(root);
        return v;
    }
    
    void postOrder(TreeNode* root) {
        if (root != NULL) {
            postOrder(root->left);
            postOrder(root->right);
            v.push_back(root->val);
        }
    }
};
