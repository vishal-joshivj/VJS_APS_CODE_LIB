// https://leetcode.com/problems/successful-pairs-of-spells-and-potions/
// binary search series

class Solution
{
public:
  vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
  {
    vector<int> res(spells.size());
    sort(potions.begin(), potions.end());
    for (int i = 0; i < spells.size(); i++)
    {
      long long temp = success / spells[i];
      if (success % spells[i])
      {
        temp++;
      }
      int t = lower_bound(potions.begin(), potions.end(), temp) - potions.begin();
      res[i] = potions.size() - (t);
    }
    return res;
  }
};