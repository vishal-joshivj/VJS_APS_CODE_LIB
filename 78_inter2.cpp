// https://leetcode.com/problems/intersection-of-two-arrays-ii/

class Solution
{
public:
  vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
  {
    map<int, int> m1;
    map<int, int> m2;
    vector<int> res;
    for (auto e : nums1)
    {
      m1[e]++;
    }

    for (auto e : nums2)
    {
      m2[e]++;
    }

    auto it = m1.begin();
    while (it != m1.end())
    {
      int m = min(m1[it->first], m2[it->first]);
      int i = 0;
      while (i < m)
      {
        res.push_back(it->first);
        i++;
      }
      it++;
    }

    return res;
  }
};