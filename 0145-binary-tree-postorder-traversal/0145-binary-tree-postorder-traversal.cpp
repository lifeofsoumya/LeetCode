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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root==NULL){
            return res;
        }
        stack<TreeNode*> st;
        st.push(root);
        
        while(!st.empty()){
            auto curr = st.top();
            res.push_back(curr->val);
            st.pop();
            if(curr->left)
                st.push(curr->left);
            if(curr->right)
                st.push(curr->right);
            
        }
        reverse(res.begin(), res.end());
        return res;
    }
};