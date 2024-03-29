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
    bool isValidBST(TreeNode* root, long min = LONG_MIN, long max = LONG_MAX) {
        if(!root) return true;
        if (root->val <= min || root->val >= max) return false; // if a node's val is lower than min, or greater than max, simply false
        return isValidBST(root->left, min, root->val) && isValidBST(root->right, root->val, max);    // if left child is more than INT_MIN and lesser than root's value, it's true, vice verca for right
    }
};