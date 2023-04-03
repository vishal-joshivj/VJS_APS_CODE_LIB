// https://leetcode.com/problems/missing-number/

// math

class Solution
{
public:
  int missingNumber(vector<int> &nums)
  {
    int AS = ((nums.size()) * (nums.size() + 1)) / 2;
    int sum = accumulate(nums.begin(), nums.end(), 0);

    return AS - sum;
  }
};