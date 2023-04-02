// https://leetcode.com/problems/flatten-binary-tree-to-linked-list/

// Flatten Binary Tree to Linked List

class Solution
{
public:
  void solve(TreeNode *p, vector<TreeNode *> &store)
  {
    if (p)
    {
      store.push_back(p);
      solve(p->left, store);
      solve(p->right, store);
    }
  }

  void flatten(TreeNode *root)
  {
    if (root == NULL)
    {
      return;
    }

    if (root->right == NULL and root->left == NULL)
    {
      return;
    }

    vector<TreeNode *> store;
    solve(root, store);
    root = store[0];
    for (int i = 0; i < store.size() - 1; i++)
    {
      TreeNode *p = store[i];
      TreeNode *q = store[i + 1];
      p->left = q->left = NULL;
      p->right = q;
      q->right = NULL;
    }
  }
};