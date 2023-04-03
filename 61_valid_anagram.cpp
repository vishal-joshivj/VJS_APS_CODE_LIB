// https://leetcode.com/problems/valid-anagram/

// Valid Anagram

class Solution
{
public:
  bool isAnagram(string s, string t)
  {
    if (s.size() != t.size())
    {
      return false;
    }

    map<char, int> m1;
    // map<char,int> m2;
    for (int i = 0; i < s.size(); i++)
    {
      m1[s[i]] += 1;
    }

    for (int i = 0; i < t.size(); i++)
    {
      if (m1[t[i]] != 0)
      {
        m1[t[i]] -= 1;
      }
      else
      {
        return false;
      }
    }

    return true;
  }
};