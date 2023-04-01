class Solution
{
public:
  ListNode *rotateRight(ListNode *head, int k)
  {
    if (!head || k == 0)
    {
      return head;
    }

    ListNode *cur = NULL;
    int nodes = 0;
    ListNode *ptr = head;
    ListNode *last = NULL;
    while (ptr)
    {
      nodes++;
      last = ptr;
      ptr = ptr->next;
    }

    int rotate = k % nodes;

    if (rotate == 0)
    {
      return head;
    }
    k = rotate;
    int moves = nodes - k - 1;
    cur = head;
    for (int i = 0; i < moves; i++)
    {
      cur = cur->next;
    }
    ptr = cur->next;
    ListNode *th = ptr;
    cur->next = NULL;
    last->next = head;
    return th;
  }
};