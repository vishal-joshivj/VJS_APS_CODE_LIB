// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

// Binary Tree Zigzag Level Order Traversal

class Solution
{
public:
  vector<vector<int>> zigzagLevelOrder(TreeNode *root)
  {
    vector<vector<int>> res;
    deque<TreeNode *> dq;

    if (root == NULL)
    {
      return res;
    }

    vector<int> temp;
    dq.push_back(root);
    dq.push_back(NULL);

    while (!dq.empty())
    {
      TreeNode *ptr = dq.front();
      dq.pop_front();
      if (ptr == NULL)
      {
        if (dq.empty())
        {
          res.push_back(temp);
          break;
        }

        dq.push_back(NULL);
        res.push_back(temp);
        temp.clear();
      }

      else
      {
        temp.push_back(ptr->val);
        if (ptr->left)
        {
          dq.push_back(ptr->left);
        }

        if (ptr->right)
        {
          dq.push_back(ptr->right);
        }
      }
    }
    for (int i = 0; i < res.size(); i++)
    {
      if (i % 2)
      {
        reverse(res[i].begin(), res[i].end());
      }
    }
    return res;
  }
};