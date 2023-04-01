https : // leetcode.com/problems/remove-nth-node-from-end-of-list/

class Solution
{
public:
  ListNode *removeNthFromEnd(ListNode *head, int n)
  {
    if (head->next == NULL)
    {
      return NULL;
    }
    ListNode *t1 = head;
    ListNode *t2 = head;

    for (int i = 0; i < (n - 1); i++)
    {
      t1 = t1->next;
    }

    cout << t1->val << " t1 al" << endl;
    t1 = t1->next;
    ListNode *st = NULL;

    while (t1)
    {
      st = t2;
      t2 = t2->next;
      t1 = t1->next;
      if (t1 == NULL)
      {
        break;
      }
    }
    if (t2 == head)
    {
      head = head->next;
      delete t2;
      return head;
    }

    cout << t2->val << "sxs" << endl;
    st->next = t2->next;
    delete t2;
    return head;
  }
};