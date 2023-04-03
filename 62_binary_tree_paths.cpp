// https://leetcode.com/problems/binary-tree-paths/

// binary tree

class Solution
{
public:
  vector<string> res;
  void solve(TreeNode *root, string temp)
  {
    if (root == NULL)
    {
      return;
    }

    temp = temp + to_string(root->val);
    temp = temp + "->";
    if (root->left == NULL && root->right == NULL)
    {
      temp.erase(temp.size() - 2);
      res.push_back(temp);
      return;
    }
    solve(root->left, temp);
    solve(root->right, temp);
  }
  vector<string> binaryTreePaths(TreeNode *root)
  {
    if (root == NULL)
    {
      return res;
    }
    string temp = "";
    solve(root, temp);
    return res;
  }
};