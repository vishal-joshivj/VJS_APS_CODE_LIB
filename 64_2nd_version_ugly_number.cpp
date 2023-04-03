

// https://leetcode.com/problems/ugly-number-ii/

// math

class Solution
{
public:
  int nthUglyNumber(int n)
  {
    set<long> store;
    set<long> res;
    store.insert(1);
    while (res.size() != n)
    {
      long t = *store.begin();
      store.erase(t);
      res.insert(t);
      store.insert(2 * t);
      store.insert(3 * t);
      store.insert(5 * t);
    }
    return *res.rbegin();
  }
};