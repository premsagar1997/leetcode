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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = new TreeNode(preorder[0]);
        for (int i = 1, n = preorder.size(); i < n; i++)
            constructTree(root, preorder[i]);
    
        return root;
    }
    
    TreeNode* constructTree(TreeNode* root, int key) {
        if (root == NULL)
            return (new TreeNode(key));
        else if (root->val > key)
            root->left = constructTree(root->left, key);
        else if (root->val < key)
            root->right = constructTree(root->right, key);
        
        return root;
    }
};
