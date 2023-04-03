// https://leetcode.com/problems/longest-palindrome/

class Solution
{
public:
  int longestPalindrome(string s)
  {
    map<char, int> m;
    bool one = false;
    bool odd = false;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
      m[s[i]] += 1;
    }

    auto p = m.begin();
    while (p != m.end())
    {
      if ((p->second) % 2 == 0)
      {
        count = count + p->second;
      }
      else if (p->second > 1 and (p->second) % 2 != 0)
      {
        count = count + (p->second) - 1;
        odd = true;
      }
      else
      {
        if (one == false)
        {
          one = true;
        }
      }

      p++;
    }

    if (odd || one)
    {
      return count + 1;
    }

    return count;
  }
};