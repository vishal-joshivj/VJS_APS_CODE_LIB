// https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/

class Solution
{
public:
  ListNode *deleteMiddle(ListNode *head)
  {
    if (head->next == NULL)
    {
      return NULL;
    }

    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *ptr = NULL;
    while (fast and fast->next)
    {
      fast = fast->next->next;
      ptr = slow;
      slow = slow->next;
    }

    ListNode *temp = slow;
    ptr->next = slow->next;
    delete (temp);
    return head;
  }
};
