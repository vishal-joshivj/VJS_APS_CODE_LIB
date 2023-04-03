// https://leetcode.com/problems/increasing-triplet-subsequence/

// Increasing Triplet Subsequence

class Solution
{
public:
  bool increasingTriplet(vector<int> &nums)
  {
    int left = INT_MAX;
    int mid = INT_MAX;

    for (int i = 0; i < nums.size(); i++)
    {
      if (left >= nums[i])
      {
        left = nums[i];
      }
      else if (mid != INT_MAX and mid < nums[i])
      {
        return true;
      }

      else
      {
        mid = nums[i];
      }
    }

    return false;
  }
};