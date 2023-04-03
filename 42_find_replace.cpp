// https://leetcode.com/problems/find-and-replace-pattern/

// hash table , string

class Solution
{
public:
  bool solve(string a, string b)
  {
    vector<char> w(26);
    vector<char> p(26);
    for (int i = 0; i < a.size(); i++)
    {
      char c1 = a[i];
      char c2 = b[i];
      if (w[c1 - 'a'] == 0)
      {
        w[c1 - 'a'] = c2;
      }

      if (p[c2 - 'a'] == 0)
      {
        p[c2 - 'a'] = c1;
      }

      if (w[c1 - 'a'] != c2 || p[c2 - 'a'] != c1)
      {
        return false;
      }
    }

    return true;
  }

  vector<string> findAndReplacePattern(vector<string> &words, string pattern)
  {
    vector<string> res;
    for (int k = 0; k < words.size(); k++)
    {
      if (solve(words[k], pattern))
      {
        res.push_back(words[k]);
      }
    }

    return res;
  }
};