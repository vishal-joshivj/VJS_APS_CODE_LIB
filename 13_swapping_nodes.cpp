// https://leetcode.com/problems/swapping-nodes-in-a-linked-list/

class Solution
{
public:
  ListNode *swapNodes(ListNode *head, int k)
  {
    ListNode *t1 = head;
    ListNode *store = NULL;
    ListNode *t2 = head;
    for (int i = 0; i < (k - 1); i++)
    {
      t1 = t1->next;
    }

    store = t1;
    t1 = t1->next;
    while (t1)
    {
      t2 = t2->next;
      t1 = t1->next;
    }

    int temp = store->val;
    store->val = t2->val;
    t2->val = temp;

    return head;
  }
};