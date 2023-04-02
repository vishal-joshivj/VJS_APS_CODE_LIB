// https://leetcode.com/problems/maximum-depth-of-binary-tree/

// Maximum Depth of Binary Tree

class Solution
{
public:
  int maxDepth(TreeNode *root)
  {
    if (root == NULL)
    {
      return 0;
    }
    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);

    return 1 + max(lh, rh);
  }
};