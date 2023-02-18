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
    void inv(TreeNode* node){
        if(!node) return;
        
        inv(node->left);
        inv(node->right); // while returning it swaps
        
        TreeNode* t = node->left;
        node->left = node->right;
        node->right = t;
    }
    TreeNode* invertTree(TreeNode* root) {
        inv(root);
        return root;
    }
};