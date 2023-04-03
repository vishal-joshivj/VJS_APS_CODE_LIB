// https://leetcode.com/problems/monotonic-array/

// Monotonic Array

class Solution
{
public:
  bool isMonotonic(vector<int> &nums)
  {
    int n = nums.size();
    bool var = true;
    for (int i = 0; i < n - 1; i++)
    {
      if (nums[i + 1] >= nums[i])
      {
      }
      else
      {
        var = false;
        break;
      }
    }
    if (var)
    {
      return true;
    }
    var = true;
    for (int i = 0; i < n - 1; i++)
    {
      if (nums[i + 1] <= nums[i])
      {
      }
      else
      {
        var = false;
        break;
      }
    }
    if (var)
    {
      return true;
    }
    return false;
  }
};