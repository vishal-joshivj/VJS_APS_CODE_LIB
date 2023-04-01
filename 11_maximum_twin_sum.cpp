// https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/

class Solution
{
public:
  int pairSum(ListNode *head)
  {
    int mx = INT_MIN;
    vector<int> v;
    ListNode *cur = head;
    while (cur)
    {
      v.push_back(cur->val);
      cur = cur->next;
    }

    int n = v.size();
    for (int i = 0; i <= (n / 2); i++)
    {
      int t = v[i] + v[n - 1 - i];

      if (mx < t)
      {
        mx = t;
      }
    }

    return mx;
  }
};