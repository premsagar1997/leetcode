/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
  public:
    
  bool findPath(vector<TreeNode*> &vec, TreeNode* root, int v) {
    if (root == NULL)
      return false;
    
    vec.push_back(root);
    
    if (root->val == v)
      return true;
    
    if ((root->left && findPath(vec, root->left, v)) || (root->right && findPath(vec, root->right, v)))
      return true;
    
    vec.pop_back();
    return false;
  }
    
  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      
    vector<TreeNode*> v1, v2;
      
    if (!findPath(v1, root, p->val) || !findPath(v2, root, q->val)) {
      return NULL;
    }
      
    int i = 0;
    for (i = 0; i < v1.size() && i < v2.size(); i++) {
      if (v1[i]->val != v2[i]->val) {
        break;
      }
    }
    
    return v1[i-1];
  }
    
};