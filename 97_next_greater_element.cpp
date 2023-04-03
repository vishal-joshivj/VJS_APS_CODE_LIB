// https://leetcode.com/problems/next-greater-element-i/

// next greater element

class Solution
{
public:
  vector<int> nextGreaterElement(vector<int> &n1, vector<int> &n2)
  {
    map<int, int> m;
    vector<int> res;
    for (int i = 0; i < n2.size(); i++)
    {
      m[n2[i]] = i;
    }

    vector<int> store(n2.size());
    store[n2.size() - 1] = -1;

    stack<int> s;
    s.push(n2[n2.size() - 1]);

    for (int i = n2.size() - 2; i >= 0; i--)
    {
      while (!s.empty() and s.top() <= n2[i])
      {
        s.pop();
      }

      if (s.empty())
      {
        store[i] = -1;
      }
      else
      {
        store[i] = s.top();
      }
      s.push(n2[i]);
    }

    for (int i = 0; i < n1.size(); i++)
    {
      if (m.find(n1[i]) != m.end())
      {
        auto ptr = m.find(n1[i]);
        res.push_back(store[ptr->second]);
      }
    }

    return res;
  }
};