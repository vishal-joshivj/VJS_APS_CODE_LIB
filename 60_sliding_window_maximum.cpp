// https://leetcode.com/problems/sliding-window-maximum/
// Sliding Window Maximum

class Solution
{
public:
  vector<int> maxSlidingWindow(vector<int> &nums, int k)
  {
    int i;
    deque<int> q;
    vector<int> res;
    for (i = 0; i < k; i++)
    {
      while (!q.empty() and nums[q.back()] <= nums[i])
      {
        q.pop_back();
      }

      q.push_back(i);
    }

    res.push_back(nums[q.front()]);
    for (; i < nums.size(); i++)
    {
      while (!q.empty() and q.front() <= i - k)
      {
        q.pop_front();
      }

      while (!q.empty() and nums[q.back()] <= nums[i])
      {
        q.pop_back();
      }

      q.push_back(i);

      res.push_back(nums[q.front()]);
    }

    return res;
  }
};