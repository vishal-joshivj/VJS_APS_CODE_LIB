// https://leetcode.com/problems/majority-element/
// counting and sorting

class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    int fre = 1;
    int maj = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
      if (nums[i] == maj)
      {
        fre++;
      }
      else
      {
        if (fre == 0)
        {
          maj = nums[i];
          fre = 1;
        }
        else
        {
          fre--;
        }
      }
    }

    return maj;
  }
};