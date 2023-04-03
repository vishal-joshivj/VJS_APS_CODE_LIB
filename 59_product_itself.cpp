// https://leetcode.com/problems/product-of-array-except-self/description/

// Product of Array Except Self

class Solution
{
public:
  vector<int> productExceptSelf(vector<int> &nums)
  {
    int n = nums.size();
    vector<int> res(n, 1);
    int temp = 1;
    for (int i = 0; i < nums.size(); i++)
    {
      res[i] = res[i] * temp;
      temp = temp * nums[i];
    }

    temp = 1;
    for (int i = n - 1; i >= 0; i--)
    {
      res[i] = res[i] * temp;
      temp = temp * nums[i];
    }
    return res;
  }
};