// https://leetcode.com/problems/binary-tree-maximum-path-sum/

// Binary Tree Maximum Path Sum

class Solution
{
public:
  int res = INT_MIN;
  int solve(TreeNode *root)
  {
    if (root == NULL)
    {
      return 0;
    }
    int left = solve(root->left);
    int right = solve(root->right);
    left = left > 0 ? left : 0;
    right = right > 0 ? right : 0;
    res = max(res, root->val + left + right);
    return root->val + (max(left, right));
  }
  int maxPathSum(TreeNode *root)
  {
    solve(root);
    return res;
  }
};