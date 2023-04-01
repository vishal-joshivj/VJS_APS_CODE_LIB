// https: // leetcode.com/problems/add-two-numbers/

class Solution
{
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
  {
    ListNode *head = NULL;
    ListNode *cur = NULL;
    int ca = 0;
    int sum = 0;
    while (l1 || l2 || ca)
    {
      if (l1)
      {
        sum = sum + l1->val;
        l1 = l1->next;
      }

      if (l2)
      {
        sum = sum + l2->val;
        l2 = l2->next;
      }

      sum = sum + ca;
      ca = sum / 10;
      ListNode *newn = new ListNode(sum % 10);
      newn->next = NULL;
      if (head == NULL)
      {
        head = newn;
        cur = newn;
      }
      else
      {
        cur->next = newn;
        cur = newn;
      }

      sum = 0;
    }

    return head;
  }
};