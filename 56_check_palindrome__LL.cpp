// https://leetcode.com/problems/palindrome-linked-list/

// palindrome linked list

class Solution
{
public:
  ListNode *reverse(ListNode *th)
  {
    ListNode *p = th;
    ListNode *q = NULL;
    ListNode *r = NULL;

    while (p)
    {
      r = q;
      q = p;
      th = p;
      p = p->next;
      q->next = r;
    }

    return th;
  }
  bool isPalindrome(ListNode *head)
  {
    if (!head)
    {
      return false;
    }

    ListNode *cur = head;
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast and fast->next)
    {
      fast = fast->next->next;
      slow = slow->next;
    }

    ListNode *last = reverse(slow);

    while (last)
    {
      if (last->val != cur->val)
      {
        return false;
      }
      last = last->next;
      cur = cur->next;
    }

    return true;
  }
};