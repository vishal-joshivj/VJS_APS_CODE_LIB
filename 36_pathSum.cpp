// https://leetcode.com/problems/path-sum/
// Path Sum

class Solution
{
public:
  bool hasPathSum(TreeNode *root, int targetSum)
  {
    if (root == NULL)
    {
      return false;
    }

    targetSum -= root->val;

    if (root->left == NULL and root->right == NULL)
    {
      if (targetSum == 0)
      {
        return true;
      }
      else
      {
        return false;
      }
    }

    return hasPathSum(root->left, targetSum) or hasPathSum(root->right, targetSum);
  }
};