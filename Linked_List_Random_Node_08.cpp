class Solution
{
public:
  ListNode *th = NULL;
  vector<ListNode *> v;
  int len;
  Solution(ListNode *head)
  {
    ListNode *th = head;
    while (head)
    {
      len++;
      v.push_back(head);
      head = head->next;
    }
    len = v.size();
  }

  int getRandom()
  {

    int ind = rand() % len;
    ListNode *temp = v[ind];
    return temp->val;
  }
};

