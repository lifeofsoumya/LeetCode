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
//Map is used to find the index of element for inorder vector
    map<int,int> inMap;
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i = 0; i < inorder.size(); i++) {
            inMap[inorder[i]] = i;
        }
        return build(inorder, postorder, 0, inorder.size() - 1, 0,  postorder.size() - 1);
    }
    
	/*
	si -> Inorder Start Index
	ei -> Inorder End Index
	sp -> Postorder Start Index
	ep -> Postorder End Index
	*/
	
    TreeNode *build(vector<int>&in, vector<int>&post, int si, int ei, int sp, int ep) {
        if(sp > ep || si > ei) return NULL;
        TreeNode *root = new TreeNode(post[ep]);
        int inRoot = inMap[post[ep]];
        root->left = build(in, post, si, inRoot - 1, sp, sp + inRoot - si - 1);
        root->right = build(in, post, inRoot + 1, ei,sp + inRoot - si, ep - 1);
        return root;
    }
};