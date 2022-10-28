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
    int solve(TreeNode* node, int &res){
        if(!node) return 0;
        int leftBS = node->val + solve(node->left, res); // left branch sum using recursion
        int rightBS = node->val + solve(node->right, res);
        
        // either max we've found already, or this node is max, or left subtree is max, or right one, or the tree starting from this node is max
        res = max({res, node->val, leftBS, rightBS, leftBS+rightBS-node->val}); 
        
        return max({leftBS, rightBS, node->val}); //Return the max branch Sum
    }
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        solve(root, res);
        return res;
    }
};