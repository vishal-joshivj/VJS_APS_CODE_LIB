// https://leetcode.com/problems/odd-even-linked-list/

//  Odd Even Linked List

class Solution
{
public:
  ListNode *oddEvenList(ListNode *head)
  {
    if (head == NULL)
    {
      return NULL;
    }
    ListNode *h1 = NULL;
    ListNode *h2 = NULL;
    ListNode *c1 = NULL;
    ListNode *c2 = NULL;
    int count = 0;
    while (head)
    {
      count++;
      if (count % 2)
      {
        if (h1 == NULL)
        {
          ListNode *t = new ListNode(head->val);
          h1 = t;
          c1 = h1;
        }
        else
        {
          ListNode *t = new ListNode(head->val);
          c1->next = t;
          c1 = t;
        }
      }

      else
      {
        if (h2 == NULL)
        {
          ListNode *t = new ListNode(head->val);
          h2 = t;
          c2 = h2;
        }
        else
        {
          ListNode *t = new ListNode(head->val);
          c2->next = t;
          c2 = t;
        }
      }

      head = head->next;
    }

    c1->next = h2;
    return h1;
  }
};