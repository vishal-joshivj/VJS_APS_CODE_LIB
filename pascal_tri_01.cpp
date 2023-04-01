//https : // leetcode.com/problems/pascals-triangle/
class Solution
{
public:
  vector<vector<int>> generate(int r)
  {
    vector<vector<int>> res;
    vector<int> v;
    if (r >= 1)
    {
      v.push_back(1);
      res.push_back(v);
      v.clear();
      if (r == 1)
      {
        return res;
      }
      v.push_back(1);
      v.push_back(1);
      res.push_back(v);
      v.clear();
      if (r == 2)
      {
        return res;
      }
    }
    for (int i = 3; i <= r; i++)
    {
      vector<int> temp(i);
      temp[0] = 1;
      temp[i - 1] = 1;
      vector<int> extra = res[i - 2];
      for (int j = 0; j < extra.size() - 1; j++)
      {
        temp[j + 1] = extra[j] + extra[j + 1];
      }
      res.push_back(temp);
      temp.clear();
    }
    return res;
  }
};