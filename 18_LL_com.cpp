  // https://leetcode.com/problems/linked-list-components/

  class Solution
  {
  public:
    int numComponents(ListNode *head, vector<int> &nums)
    {
      unordered_set<int> st(nums.begin(), nums.end());
      int res = 0;
      bool check = false;
      while (head)
      {
        if (st.find(head->val) == st.end())
        {
          check = false;
        }

        else
        {
          if (!check)
          {
            res++;
            check = true;
          }
        }

        head = head->next;
      }

      return res;
    }
  };