// https://leetcode.com/problems/split-linked-list-in-parts/

class Solution
{
public:
  vector<ListNode *> splitListToParts(ListNode *head, int k)
  {
    vector<ListNode *> res;
    int n = 0;
    ListNode *t = head;
    while (t)
    {
      n++;
      t = t->next;
    }

    int rem = n % k;
    int grp = n / k;
    for (int i = 0; i < k; i++)
    {
      ListNode *h = NULL;
      ListNode *cur = NULL;
      for (int j = 0; j < grp + (i < rem ? 1 : 0); j++)
      {
        ListNode *newn = new ListNode(head->val);
        if (h == NULL)
        {
          h = newn;
          cur = h;
        }
        else
        {
          cur->next = newn;
          cur = newn;
        }
        if (head != NULL)
        {
          head = head->next;
        }
        else
        {
          res.push_back(h);
          break;
        }
      }
      res.push_back(h);
    }
    while (res.size() != k)
    {
      ListNode *temp = NULL;
      res.push_back(temp);
    }

    return res;
  }
};