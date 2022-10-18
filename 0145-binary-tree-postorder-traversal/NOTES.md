Doesn't work IDK why
​
```
class Solution {
public:
vector<int> postorderTraversal(TreeNode* root) {
vector<int> res;
if (!root) {
return;
}
​
postorderTraversal(root -> left);
postorderTraversal(root -> right);
res.push_back( root->val);
return res;
}
};
```