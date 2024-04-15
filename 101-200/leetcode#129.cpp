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
    int sumNumbers(TreeNode* root) {
        return sumOfLeafNums(root, 0);
    }

    int sumOfLeafNums(TreeNode* root, int sum) {
        if (root == NULL)
            return 0;
        
        sum = (sum * 10) + root->val;

        if (isLeafNode(root))
            return sum;

        return sumOfLeafNums(root->left, sum) + sumOfLeafNums(root->right, sum);
    }

    bool isLeafNode(TreeNode* root) {
       return (root->left == NULL && root->right == NULL);
    }
};
