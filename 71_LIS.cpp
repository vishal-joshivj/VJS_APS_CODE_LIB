// https://leetcode.com/problems/longest-increasing-subsequence/

// Longest Increasing Subsequence using BINARY SEARCH

class Solution
{
public:
  int lengthOfLIS(vector<int> &nums)
  {
    vector<int> res;
    int len = 1;
    res.push_back(nums[0]);
    int n = nums.size();

    for (int i = 1; i < n; i++)
    {
      if (nums[i] > res.back())
      {
        res.push_back(nums[i]);
        len++;
      }
      else
      {
        int ind = lower_bound(res.begin(), res.end(), nums[i]) - res.begin();
        res[ind] = nums[i];
      }
    }

    for (auto &e : res)
    {
      cout << e << " ";
    }
    return len;
  }
};
