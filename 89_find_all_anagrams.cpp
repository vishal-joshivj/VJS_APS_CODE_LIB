// https://leetcode.com/problems/find-all-anagrams-in-a-string/

// Find all anagrams

class Solution
{
public:
  vector<int> findAnagrams(string s, string p)
  {
    vector<int> res;
    int lp = p.size();
    int ls = s.size();
    if (ls < lp)
    {
      return res;
    }
    vector<int> t(26, 0);
    vector<int> window(26, 0);
    for (int i = 0; i < p.size(); i++)
    {
      window[s[i] - 'a']++;
      t[p[i] - 'a']++;
    }
    if (window == t)
    {
      res.push_back(0);
    }
    for (int i = lp; i < s.size(); i++)
    {
      window[s[i - lp] - 'a']--;
      window[s[i] - 'a']++;
      if (window == t)
      {
        res.push_back(i - lp + 1);
      }
    }
    return res;
  }
};