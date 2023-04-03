// https://leetcode.com/problems/repeated-substring-pattern/

//  Repeated Substring Pattern

class Solution
{
public:
  bool repeatedSubstringPattern(string s)
  {
    bool var = true;
    int n = s.size();
    for (int i = 1; i < n; i++)
    {
      if (n % i == 0)
      {
        string temp = s.substr(0, i);
        var = true;
        for (int j = i; j < n; j = j + temp.size())
        {
          if (temp != s.substr(j, temp.size()))
          {
            var = false;
            break;
          }
        }
        if (var)
        {
          return true;
        }
      }
    }
    return false;
  }
};