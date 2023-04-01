// https://leetcode.com/problems/intersection-of-two-linked-lists/
class Solution
{
public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
  {
    ListNode *p1 = headA;
    ListNode *p2 = headB;
    ListNode *res = NULL;
    while (p1)
    {
      p1->val = (-1) * p1->val;
      p1 = p1->next;
    }

    while (p2)
    {
      if (p2->val < 0)
      {
        res = p2;
        break;
      }
      p2 = p2->next;
    }

    p1 = headA;
    while (p1)
    {
      p1->val = (-1) * p1->val;
      p1 = p1->next;
    }

    return res;
  }
};