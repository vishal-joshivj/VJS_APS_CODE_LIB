// https://leetcode.com/problems/validate-binary-search-tree/

//  Validate Binary Search Tree

class Solution
{
public:
  void inorder(TreeNode *ptr, vector<int> &v)
  {
    if (ptr)
    {
      inorder(ptr->left, v);
      v.push_back(ptr->val);
      inorder(ptr->right, v);
    }
  }

  bool isValidBST(TreeNode *root)
  {
    vector<int> v;
    inorder(root, v);

    for (int i = 0; i < v.size() - 1; i++)
    {
      if (v[i + 1] <= v[i])
      {
        return false;
      }
    }

    return true;
  }
};