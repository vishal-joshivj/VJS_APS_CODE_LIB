// https://leetcode.com/problems/sort-colors/description/

// sort colors

class Solution
{
public:
  void sortColors(vector<int> &nums)
  {
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    for (auto e : nums)
    {
      if (e == 0)
      {
        c1++;
      }
      else if (e == 1)
      {
        c2++;
      }
      else
      {
        c3++;
      }
    }

    int count = 0;

    while (count < c1)
    {
      nums[count] = 0;
      count++;
    }

    while (count < (c1 + c2))
    {
      nums[count] = 1;
      count++;
    }

    while (count < (c1 + c2 + c3))
    {
      nums[count] = 2;
      count++;
    }
  }
};