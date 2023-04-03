//  https://leetcode.com/problems/orderly-queue/

// Orderly Queue

class Solution
{
public:
  string orderlyQueue(string s, int k)
  {
    int n = s.size();
    string doubleString = s + s;

    if (k == 1)
    {
      for (int i = 1; i < n; i++)
      {
        string str = doubleString.substr(i, n);
        if (s > str)
        {
          s = str;
        }
      }

      return s;
    }

    sort(s.begin(), s.end());
    return s;
  }
};