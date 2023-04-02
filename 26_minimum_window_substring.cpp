// https://leetcode.com/problems/minimum-window-substring/

// sliding window based question

class Solution
{
public:
  string minWindow(string s1, string s2)
  {

    string res = "";
    unordered_map<char, int> m2;
    for (auto &e : s2)
    {
      m2[e]++;
    }

    int mc = 0;
    int dmc = s2.size();

    unordered_map<char, int> m1;
    int i = -1;
    int j = -1;

    while (true)
    {
      bool var1 = false;
      bool var2 = false;

      while (i < s1.size() - 1 and mc < dmc)
      {
        i++;
        m1[s1[i]]++;

        if (m1[s1[i]] <= m2[s1[i]])
        {
          mc++;
        }

        var1 = true;
      }

      while (i < j and mc == dmc)
      {
        string temp = s1.substr(j + 1, i + 1);
        if (res.size() == 0 or res.size() > temp.size())
        {
          res = temp;
        }

        j++;
        if (m1[s1[j]] == 1)
        {
          m1.erase(s1[j]);
        }
        else
        {
          m1[s1[j]]--;
        }

        if (m1[s1[j]] < m2[s1[j]])
        {
          mc--;
        }

        var2 = true;
      }

      if (var1 == false and var2 == false)
      {
        break;
      }
    }

    return res;
  }
};