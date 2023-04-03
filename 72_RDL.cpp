// https://leetcode.com/problems/remove-duplicate-letters/

// Remove Duplicate Letters

class Solution
{
public:
  string removeDuplicateLetters(string s)
  {
    int n = s.size();
    vector<int> li(26, 0); // li -> last index
    for (int i = 0; i < n; i++)
    {
      li[s[i] - 'a'] = i;
    }

    // use can use int but bool is 2 bytes

    vector<bool> seen(26, false);
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
      int ind = s[i] - 'a';
      if (seen[ind])
      {
        continue;
      }

      while (!st.empty() and st.top() > s[i] and li[st.top() - 'a'] > i)
      {
        seen[st.top() - 'a'] = false;
        st.pop();
      }

      st.push(s[i]);
      seen[ind] = true;
    }

    string res = "";
    while (!st.empty())
    {
      res = res + st.top();
      st.pop();
    }

    reverse(res.begin(), res.end());
    return res;
  }
};