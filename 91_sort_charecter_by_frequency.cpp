// https://leetcode.com/problems/sort-characters-by-frequency/
//  Sort Characters By Frequency

class Solution
{
public:
  string frequencySort(string s)
  {
    map<char, int> m;
    for (auto &e : s)
    {
      m[e]++;
    }

    vector<pair<int, char>> vec;

    for (auto &e : m)
    {
      vec.push_back({e.second, e.first});
    }

    string res = "";
    sort(vec.begin(), vec.end(), greater<>());
    for (auto &e : vec)
    {
      int n = e.first;
      while (n)
      {
        res += e.second;
        n--;
      }
    }

    return res;
  }
};