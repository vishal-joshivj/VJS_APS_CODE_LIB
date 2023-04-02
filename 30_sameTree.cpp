// https://leetcode.com/problems/same-tree/
// same tree

class Solution
{
public:
  bool isSameTree(TreeNode *p, TreeNode *q)
  {
    if (p == NULL and q == NULL)
    {
      return true;
    }
    if (p && q)
    {
      if (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right))
      {
        return true;
      }
    }

    return false;
  }
};