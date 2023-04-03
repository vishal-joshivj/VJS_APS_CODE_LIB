// https://leetcode.com/problems/continuous-subarray-sum/solutions/

class Solution
{
public:
  bool checkSubarraySum(vector<int> &nums, int k)
  {
    int sum = 0;
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
      sum += nums[i];
      if (i >= 1 and sum % k == 0)
      {
        return true;
      }

      if (mp.find(sum % k) == mp.end())
      {
        mp[sum % k] = i;
      }
      else
      {
        if (i - mp[sum % k] >= 2)
        {
          return true;
        }
      }
    }
    return false;
  }
};