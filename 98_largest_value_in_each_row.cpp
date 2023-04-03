// https://leetcode.com/problems/find-largest-value-in-each-tree-row/

class Solution
{
public:
  vector<int> largestValues(TreeNode *root)
  {
    vector<int> res;
    if (root == NULL)
    {
      return res;
    }

    deque<TreeNode *> dq;
    dq.push_back(root);
    dq.push_back(NULL);
    vector<int> temp;
    while (!dq.empty())
    {
      TreeNode *ptr = dq.front();
      dq.pop_front();
      if (ptr == NULL)
      {
        if (dq.empty())
        {
          int a = *max_element(temp.begin(), temp.end());
          res.push_back(a);
          return res;
        }
        dq.push_back(NULL);
        int a = *max_element(temp.begin(), temp.end());
        res.push_back(a);
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

    return res;
  }
};