//  https://leetcode.com/problems/invert-binary-tree/

// // invert binary tree

class Solution
{
public:
  void solve(TreeNode *root)
  {
    if (root == NULL)
    {
      return;
    }
    if (root->left or root->right)
    {
      TreeNode *t = root->left;
      root->left = root->right;
      root->right = t;
    }
    solve(root->left);
    solve(root->right);
    return;
  }
  TreeNode *invertTree(TreeNode *root)
  {
    if (root == NULL)
    {
      return root;
    }
    solve(root);
    return root;
  }
};