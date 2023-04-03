// https://leetcode.com/problems/intersection-of-two-arrays/

class Solution
{
public:
  vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
  {
    map<int, int> m;
    vector<int> res;
    set<int> st;
    for (auto e : nums1)
    {
      m[e]++;
    }

    for (int i = 0; i < nums2.size(); i++)
    {
      if (m.find(nums2[i]) != m.end())
      {
        st.insert(nums2[i]);
      }
    }

    auto it = st.begin();
    while (it != st.end())
    {
      res.push_back(*it);
      it++;
    }
    return res;
  }
};