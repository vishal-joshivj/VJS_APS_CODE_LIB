// https://leetcode.com/problems/symmetric-tree/

// Symmetric Tree

class Solution
{
public:
  static bool check(TreeNode *L, TreeNode *R)
  {
    if (!R and !L)
    {
      return true;
    }

    if (R and L)
    {
      if (R->val == L->val and check(L->left, R->right) and check(L->right, R->left))
      {
        return true;
      }
    }
    return false;
  }
  bool isSymmetric(TreeNode *root)
  {
    return check(root->left, root->right);
  }
};