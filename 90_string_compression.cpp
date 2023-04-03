// https://leetcode.com/problems/string-compression/

// string compression

class Solution
{
public:
  int compress(vector<char> &chars)
  {
    map<char, int> m;
    int count = 0;
    int temp = 1, j = 0, i = 0;
    while (j < chars.size())
    {
      while (j + 1 < chars.size() and chars[j] == chars[j + 1])
      {
        temp++;
        j++;
      }
      if (temp > 1)
      {
        string t = to_string(temp);
        chars[i] = chars[j];
        i++;
        for (int k = 0; k < t.size(); k++)
        {
          chars[i] = t[k];
          i++;
        }
        count += t.size() + 1;
      }
      else if (temp == 1)
      {
        chars[i] = chars[j];
        i++;
        count++;
      }
      j++;
      if (j < chars.size())
      {
        temp = 1;
      }
      else
      {
        break;
      }
    }
    return count;
  }
};