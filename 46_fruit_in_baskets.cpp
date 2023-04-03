// https://leetcode.com/problems/fruit-into-baskets/

// Fruit Into Baskets

class Solution
{
public:
  int totalFruit(vector<int> &nums)
  {
    map<int, int> mp;
    int res = 0;
    int f = 0, l = 0, n = nums.size();
    for (; l < n;)
    {
      mp[nums[l]]++;
      while (mp.size() > 2 and f < l)
      {
        if (mp[nums[f]] == 1)
        {
          mp.erase(nums[f]);
        }
        else
        {
          mp[nums[f]]--;
        }
        f++;
      }
      res = max(res, l - f + 1);
      l++;
    }
    return res;
  }
};