// https: // leetcode.com/problems/reverse-linked-list/

class Solution
{
public:
  ListNode *reverseList(ListNode *head)
  {
    ListNode *p = head;
    ListNode *q = NULL;
    ListNode *r = NULL;

    while (p)
    {
      r = q;
      q = p;
      p = p->next;
      head = q;
      q->next = r;
    }

    return head;
  }
};