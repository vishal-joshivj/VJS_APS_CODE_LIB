// https://leetcode.com/problems/find-the-duplicate-number/

// slow and fast pointers

class Solution
{
public:
  int findDuplicate(vector<int> &nums)
  {

    int slow = nums[0];
    int fast = nums[0];

    do
    {
      slow = nums[slow];
      fast = nums[nums[fast]];
    } while (slow != fast);

    return slow;
  }
};