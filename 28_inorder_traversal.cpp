// https://leetcode.com/problems/binary-tree-inorder-traversal/

//  inorder

class Solution
{
public:
  void solve(TreeNode *root, vector<int> &res)
  {
    if (root)
    {
      solve(root->left, res);
      res.push_back(root->val);
      solve(root->right, res);
    }
  }
  vector<int> inorderTraversal(TreeNode *root)
  {
    vector<int> res;
    if (root == NULL)
    {
      return res;
    }
    solve(root, res);
    return res;
  }
};