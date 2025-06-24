/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[][]}
 */
var zigzagLevelOrder = function(root) {
    const results = [];

    function traversal(root, level) {
        if (!root) return;

        if (results[level]) {
            if (level % 2 == 0) {
                results[level].push(root.val);
            } else {
                results[level].unshift(root.val);
            }
        } else {
            results[level] = [root.val];
        }

        traversal(root.left, level + 1);
        traversal(root.right, level + 1);
    }

    traversal(root, 0);

    return results;
};
