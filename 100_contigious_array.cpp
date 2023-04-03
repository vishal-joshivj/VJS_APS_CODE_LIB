// https://leetcode.com/problems/contiguous-array/

class Solution
{
public:
  int findMaxLength(vector<int> &nums)
  {
    unordered_map<int, int> m;
    int sum = 0;
    int maxlen = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] == 0)
      {
        nums[i] = -1;
      }
      sum += nums[i];
      if (sum == 0)
      {
        maxlen = max(i + 1, maxlen);
      }
      else if (m.find(sum) != m.end())
      {
        maxlen = max(i - m[sum], maxlen);
      }
      else
      {
        m[sum] = i;
      }
    }
    return maxlen;
  }
};