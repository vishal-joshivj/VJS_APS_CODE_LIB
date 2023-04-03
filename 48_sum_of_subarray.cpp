// https://leetcode.com/problems/sum-of-subarray-minimums/

// Sum of Subarray Minimums

class Solution
{
public:
  int sumSubarrayMins(vector<int> &nums)
  {
    int n = nums.size();
    vector<int> pre(n);
    vector<int> next(n);
    for (int i = 0; i < n; i++)
    {
      next[i] = n - i - 1;
      pre[i] = i;
    }
    stack<int> st1;
    stack<int> st2;
    for (int i = 0; i < n; i++)
    {
      while (st1.size() and nums[st1.top()] >= nums[i])
      {
        st1.pop();
      }
      if (st1.size())
      {
        pre[i] = i - st1.top() - 1;
      }
      st1.push(i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
      while (st2.size() and nums[st2.top()] > nums[i])
      {
        st2.pop();
      }
      if (st2.size())
      {
        next[i] = st2.top() - i - 1;
      }
      st2.push(i);
    }
    int res = 0;
    int mod = 1000000007;
    for (int i = 0; i < n; i++)
    {
      res += ((long)((nums[i]) * (pre[i] + 1) * (next[i] + 1))) % mod;
    }
    return res;
  }
};