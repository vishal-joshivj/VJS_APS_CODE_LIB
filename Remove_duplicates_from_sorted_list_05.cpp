// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

class Solution
{
public:
  ListNode *deleteDuplicates(ListNode *head)
  {
    if (head == NULL)
    {
      return head;
    }
    if (head->next == NULL)
    {
      return head;
    }

    ListNode *ptr1 = head;
    ListNode *ptr2 = head->next;
    while (ptr2)
    {
      if (ptr1->val == ptr2->val)
      {
        ptr1->next = ptr2->next;
        ListNode *temp = ptr2;
        ptr2 = ptr2->next;
        delete (temp);
      }
      else
      {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
      }
    }

    return head;
  }
};
