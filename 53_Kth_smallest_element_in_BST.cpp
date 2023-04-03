// https://leetcode.com/problems/kth-smallest-element-in-a-bst/

// Kth Smallest Element in a BST

class Solution
{

public:
  int res;
  void travel(TreeNode *root, int &k)
  {
    if (root)
    {
      travel(root->left, k);
      k--;
      if (k == 0)
      {
        res = root->val;
      }
      travel(root->right, k);
    }
  }

  int kthSmallest(TreeNode *root, int k)
  {

    travel(root, k);

    return res;
  }
};