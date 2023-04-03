// https://leetcode.com/problems/sum-of-left-leaves/

// sum of left

class Solution
{
public:
  int sum = 0;
  void solve(TreeNode *root)
  {
    if (root)
    {
      solve(root->left);
      if (root->left)
      {
        if (root->left->left == NULL and root->left->right == NULL)
        {
          sum += root->left->val;
        }
      }
      solve(root->right);
    }
  }
  int sumOfLeftLeaves(TreeNode *root)
  {
    if (!root)
    {
      return 0;
    }
    solve(root);
    return sum;
  }
};