// https://leetcode.com/problems/reorder-list/

class Solution
{
public:
  ListNode *reverse(ListNode *ptr)
  {
    ListNode *p = ptr;
    ListNode *q = NULL;
    ListNode *r = NULL;

    while (p)
    {
      r = q;
      q = p;
      ptr = p;
      p = p->next;
      q->next = r;
    }

    return ptr;
  }

  void reorderList(ListNode *head)
  {
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast and fast->next)
    {
      fast = fast->next->next;
      slow = slow->next;
    }

    ListNode *rh = reverse(slow);

    ListNode *t1 = head;
    ListNode *t2 = rh;
    ListNode *cur = NULL;

    while (t1 and t2)
    {
      ListNode *it1 = t1->next;
      ListNode *it2 = t2->next;
      if (cur == NULL)
      {
        t1->next = t2;
        t2->next = NULL;
        cur = t2;
        t1 = it1;
        t2 = it2;
      }
      else
      {
        cur->next = t1;
        t1->next = t2;
        t2->next = NULL;
        cur = t2;
        t1 = it1;
        t2 = it2;
      }
    }
    if (t1)
    {
      cur->next = t1;
      t1->next = NULL;
    }

    if (t2)
    {
      cur->next = t2;
      t2->next = NULL;
    }
  }
};