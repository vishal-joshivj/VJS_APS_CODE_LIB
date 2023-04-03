// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/

//  Lowest Common Ancestor of a Binary Search Tree

class Solution
{
public:
  TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
  {
    if (root == NULL)
    {
      return NULL;
    }

    if (root == q || root == p)
    {
      return root;
    }

    TreeNode *l = lowestCommonAncestor(root->left, p, q);
    TreeNode *r = lowestCommonAncestor(root->right, p, q);

    if (l && r)
    {
      return root;
    }

    else
    {
      return (r ? r : l);
    }
  }
};