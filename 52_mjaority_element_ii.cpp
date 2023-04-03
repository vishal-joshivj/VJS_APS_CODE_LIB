// https://leetcode.com/problems/majority-element-ii/

// majority element 2nd

class Solution
{
public:
  vector<int> majorityElement(vector<int> &nums)
  {
    int n = nums.size();
    vector<int> res;
    map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
      m[nums[i]] += 1;
    }
    auto ptr = m.begin();

    while (ptr != m.end())
    {
      if (ptr->second > (n / 3))
      {
        res.push_back(ptr->first);
      }

      ptr++;
    }

    return res;
  }
};