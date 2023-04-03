// https://leetcode.com/problems/word-pattern/

// word pattern

class Solution
{
public:
  bool wordPattern(string p, string s)
  {
    vector<string> v;
    stringstream input(s);
    set<string> st;
    string word;
    while (input >> word)
    {
      v.push_back(word);
    }
    if (v.size() != p.size())
    {
      return false;
    }
    map<char, string> m;
    for (int i = 0; i < p.size(); i++)
    {
      if (m.find(p[i]) != m.end())
      {
        string temp = m[p[i]];
        if (temp != v[i])
        {
          return false;
        }
      }
      else
      {
        int ss = st.size();
        st.insert(v[i]);
        if (ss == st.size())
        {
          return false;
        }
        m[p[i]] = v[i];
      }
    }
    return true;
  }
};