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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        vector<int> v;
        if (root == NULL)
            return res;
        
        queue<TreeNode*> q;
        queue<TreeNode*> tempQ;
        tempQ.push(root);
        
        do {
            tempQ.swap(q);
            v.clear();
            while (!q.empty()) {
                TreeNode* current = q.front();
                q.pop();

                v.push_back(current->val);

                if (current->left)
                    tempQ.push(current->left);
                if (current->right)
                    tempQ.push(current->right);
            }
            res.push_back(v);
        } while (!tempQ.empty());
        
        return res;
    }
};
