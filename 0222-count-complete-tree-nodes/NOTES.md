Probable best solution as we have other cconditions too
```
class Solution {
public:
int recursive(TreeNode* root, int l, int r) {
if (!root) return 0;
TreeNode *ptr_r = root, *ptr_l = root;
if (!l) while ((ptr_l = ptr_l->left)) l++;
if (!r) while ((ptr_r = ptr_r->right)) r++;
if (l == r) return pow(2, l + 1) - 1;
return 1 + recursive(root->left, l - 1, 0) + recursive(root->right, 0, r - 1);
}
int countNodes(TreeNode* root) {
return recursive(root, 0, 0);
}
};
```